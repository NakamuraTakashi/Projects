export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 1 ./coawstM ocean_mangrove_Bg.in
#