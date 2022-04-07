export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 10 ./oceanM.exe ocean_fukido.in
#