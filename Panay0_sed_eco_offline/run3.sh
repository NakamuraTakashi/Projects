export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 7 ./coawstM.exe ocean3.in
#