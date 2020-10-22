Linux/VM Setup:
Download Ubuntu 20.04 Focal Fossa desktop image from https://releases.ubuntu.com/20.04/
Download and install the most recent version of VirtualBox at https://www.virtualbox.org/
Run VirtualBox, click the New button at the top of the window, and follow steps to create a vm using the ubuntu20.04 iso file you just downloaded
--Note: I would recommend allocating at least 4 GB of RAM and 20 GB on your hard drive for the VM. Minimal installation in the next step requires roughly 10 GB, and the RAM is only used when the VM needs it/is running.
Start you

Directory:
Launch
	(launch (.py) files here)
src
	/package1
		CMakeLists.txt
		package.xml
		example_node.cpp
	/package2
		CMakeLists.txt
		package.xml
		setup.py
		resource/package_2
