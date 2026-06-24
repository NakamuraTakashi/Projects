export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 28 ./coawstM ocean_TB2.in
#mpirun -use-hwthread-cpus -np 31 ./coawstM coupling_TB2.in
#