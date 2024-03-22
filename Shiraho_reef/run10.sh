export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 26 ./coawstM.exe coupling_shiraho_reef_10.in
# mpirun -use-hwthread-cpus -np 7 ./coawstM coupling_shiraho_reef_10.in
##