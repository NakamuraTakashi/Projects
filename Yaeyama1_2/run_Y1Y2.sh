export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM ocean_Y1Y2.in
#mpirun -use-hwthread-cpus -np 30 ./coawstG ocean_Y1Y2.in
#