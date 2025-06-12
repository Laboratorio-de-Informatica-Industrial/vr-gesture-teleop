import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/acelino/tutorial_ws/install/gazebo_simulation_scene2'
