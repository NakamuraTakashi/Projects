#mpirun -np 11 ./coawstM.exe coupling_shiraho_reef_10.in
#mpirun -use-hwthread-cpus -np 11 ./coawstM.exe coupling_shiraho_reef_10.in
#mpirun -np 6 ./coawstG.exe coupling_shiraho_reef_10.in
mpirun -use-hwthread-cpus -np 11 ./coawstM.exe coupling_shiraho_reef_10.in
##