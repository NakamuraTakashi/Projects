export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM oceanP2.in
#