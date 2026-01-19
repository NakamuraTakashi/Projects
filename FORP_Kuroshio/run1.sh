export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM ocean.in
#