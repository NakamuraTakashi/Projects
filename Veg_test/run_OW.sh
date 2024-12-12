export HDF5_DISABLE_VERSION_CHECK=1
#mpirun -np 11 ./coawstM.exe coupling_shiraho_reef_10.in
mpirun -use-hwthread-cpus -np 30 ./coawstM coupling_veg_test.in
#mpirun -use-hwthread-cpus -np 30 ./coawstG coupling_veg_test.in
##