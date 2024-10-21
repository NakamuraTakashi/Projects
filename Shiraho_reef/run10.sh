export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 7 ./coawstM coupling_shiraho_reef_10.in
##