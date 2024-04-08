export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20090815.in
#mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20100510.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20100815.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20110115.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20110815.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20181010.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20221120.in
mpirun -use-hwthread-cpus -np 31 ./coawstM.exe swan_Y2_20231001.in
#