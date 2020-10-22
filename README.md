Linux/VM Setup:

Download Ubuntu 20.04 Focal Fossa desktop image from https://releases.ubuntu.com/20.04/

Download and install the most recent version of VirtualBox at https://www.virtualbox.org/

Run VirtualBox, click the New button at the top of the window, and follow steps to create a vm using the ubuntu20.04 iso file you just downloaded
--Note: I would recommend allocating at least 4 GB of RAM and 20 GB on your hard drive for the VM. Minimal installation in the next step requires roughly 10 GB, and the RAM is only used when the VM needs it/is running.


dev_ws/src/wa_helper is a package to create generic helper nodes/functions for other packages we create (see include/wa_helper/wa_publisher.hpp)

Build Instructions:

in dev_ws run:
`colcon build`

you can use
`colcon build --packages-select <package ...>`
to build specific packages

then in another terminal, source the installed files from in dev_ws
`source install/setup.bash`


now your nodes are ready to use
