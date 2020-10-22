**Linux/VM Setup:

Download Ubuntu 20.04 Focal Fossa desktop image from https://releases.ubuntu.com/20.04/

Download and install the most recent version of VirtualBox at https://www.virtualbox.org/

Run VirtualBox, click the New button at the top of the window, and follow steps to create a vm using the ubuntu20.04 iso file you just downloaded
--Note: I would recommend allocating at least 4 GB of RAM and 20 GB on your hard drive for the VM. Minimal installation in the next step requires roughly 10 GB, and the RAM is only used when the VM needs it/is running.

**Build Instructions:

in dev_ws run:
`colcon build`

you can use
`colcon build --packages-select <package ...>`
to build specific packages

then in another terminal, source the installed files from in dev_ws
`source install/setup.bash`

run ros nodes with
`ros2 run <package_name> <nodes ...>`

listen to ros topics and their data with
`ros2 topic echo <topic_name>`

**Todos:
- add more ros2 cli instructions (create package, listen to topic, etc)
- explain cpp_pubsub, wa_pubsub, and wa_helper packages
- finish wa_helper package by adding a wa_subscriber
