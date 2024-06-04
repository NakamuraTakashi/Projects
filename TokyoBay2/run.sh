export HDF5_DISABLE_VERSION_CHECK=1
#mpirun -use-hwthread-cpus -np 10 ./coawstM.exe ocean.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe coupling_TB2.in
#