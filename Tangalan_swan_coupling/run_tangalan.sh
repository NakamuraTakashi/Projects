export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 32 ./coawstM.exe coupling_tangalan.in
#