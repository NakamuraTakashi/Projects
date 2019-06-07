#mpirun -np 11 ./coawstM.exe coupling_shiraho_reef_10.in
mpirun -use-hwthread-cpus -np 1 ./coawstG.exe ocean_veg_test.in
##