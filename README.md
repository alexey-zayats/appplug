Appplug is the sample of plugin loader with Qt

Build:
qmake && make

Not on run:
linux: LD_LIBRARY_PATH=./libs ./bin/appplug
macx: DYLD_LIBRARY_PATH=./libs ./bin/appplug
