export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 28 ./coawstM ocean_TB3.in
#