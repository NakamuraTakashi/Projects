export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 11 ./coawstM.exe coupling_shiraho_reef.in
#mpirun -use-hwthread-cpus -np 11 ./coawstG.exe coupling_shiraho_reef.in
##