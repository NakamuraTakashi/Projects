export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM ocean.in
#mpirun -use-hwthread-cpus -np 30 ./wrapper.sh ./coawstM ocean.in
#mpirun -use-hwthread-cpus -np 30 ./coawstG ocean.in
#