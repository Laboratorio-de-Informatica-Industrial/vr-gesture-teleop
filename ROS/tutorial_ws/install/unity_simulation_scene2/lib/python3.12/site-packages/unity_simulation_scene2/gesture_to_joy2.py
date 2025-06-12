#!/usr/bin/env python3

# © Siemens AG, 2024
# Author: Mehmet Emre Cakal (emre.cakal@siemens.com)

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# <http://www.apache.org/licenses/LICENSE-2.0>.
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import String

class GestureToJoy(Node):
    def __init__(self):
        super().__init__('gesture_to_joy')
        
        # Subscriber que recebe o nome/estado do gesto vindo do Unity
        self.gesture_subscriber = self.create_subscription(
            String,
            'left_hand_gesture',    # Tópico publicado pela Unity
            self.gesture_callback,
            10
        )

        # Publisher que envia comandos do tipo Joy1
        self.joy_publisher = self.create_publisher(Joy, 'joy1', 10)

        # Inicializa a estrutura do Joy1 (e.g., 2 eixos e 0 botões)
        self.joy_msg = Joy()
        self.joy_msg.axes = [0.0, 0.0]
        self.joy_msg.buttons = []

    def gesture_callback(self, gesture_msg):
        """
        Callback que é chamada sempre que chega uma nova mensagem de gesto.
        O `gesture_msg.data` contém a string que representa o gesto.
        """
        gesture = gesture_msg.data

        # Mapear gestos
        if gesture == "MAO_ABERTA": #fica parado
            self.joy_msg.axes = [0.0, 0.0]
        elif gesture == "PARA_FRENTE": #para frente
            self.joy_msg.axes = [1.0, 1.0]
        elif gesture == "PARA_TRAZ": #para tras
            self.joy_msg.axes = [-1.0, -1.0]
        elif gesture == "DIREITA": #ainda não finciona
            self.joy_msg.axes = [1.0, -1.0]
        elif gesture == "ESQUERDA":
            self.joy_msg.axes = [-1.0, 1.0]
        else:
            # Gesto desconhecido → neutro
            self.joy_msg.axes = [0.0, 0.0]

        # Publica o Joy
        self.joy_publisher.publish(self.joy_msg)
        self.get_logger().info(f"Publicado Joy a partir do gesto: {gesture}")

def main(args=None):
    rclpy.init(args=args)
    node = GestureToJoy()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
