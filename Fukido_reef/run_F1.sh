export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 10 ./coawstMF1.exe ocean_Fukido1.in
#mpirun -use-hwthread-cpus -np 10 ./coawstG.exe ocean_Fukido1.in
#