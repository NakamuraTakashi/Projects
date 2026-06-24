export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM ocean_Y3.in
#mpirun -use-hwthread-cpus -np 31 ./coawstM coupling_Y3.in
#