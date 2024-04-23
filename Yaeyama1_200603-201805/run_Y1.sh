export HDF5_DISABLE_VERSION_CHECK=1
#mpirun -use-hwthread-cpus -np 31 ./coawstM.exe ocean_Y1.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe coupling_Y1.in
#