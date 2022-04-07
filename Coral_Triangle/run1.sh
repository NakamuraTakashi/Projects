export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 10 ./coawstM.exe ocean_CT.in
#