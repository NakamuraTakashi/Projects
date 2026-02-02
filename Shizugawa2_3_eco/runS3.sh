export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 31 ./coawstM couplingS3.in
#mpirun -use-hwthread-cpus -np 30 ./coawstG couplingS3.in
#