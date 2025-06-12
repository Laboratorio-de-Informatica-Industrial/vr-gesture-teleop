# VRGestureTeleop

# VR Gesture Teleop

Teleoperação via gestos em realidade virtual. O repositório conecta um projeto Unity que capta gestos VR a um módulo ROS2 que recebe e processa esses dados.

---

## 🗂 Estrutura do repositório

```text
/
├── Unity/                                   # Projeto Unity
│   └── …                                    # Package para importação de projeto Unity contendo scripts autorais de detecção de gestos
├── ROS/tutorial_ws                          # Scripts ROS2 que recebem os dados VR
│   └── /src                                 # Scripts do plugin de conexão ROS2 <--> Unity com modificações autorais
│       └── /file_server2                 
│       └── /gazebo_simulation_scene       
│       └── /unity_simulation_scene
│           └── /launch                      # Launch files
│           └── /unity_simulation_scene      # Pasta contendo script de teleoperação vr
│               └── gesture_to_joy2.py       # Script autoral que adapta o plugin para gestos
└── README.md                                # (este arquivo)
