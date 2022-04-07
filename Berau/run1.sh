export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 11 ./coawstM.exe ocean_berau1.in
#