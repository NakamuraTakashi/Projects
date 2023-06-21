export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 11 ./coawstM.exe coupling_tangalan.in
#