export HDF5_DISABLE_VERSION_CHECK=1
#mpirun -use-hwthread-cpus -np 10 ./coawstM.exe ocean_Y2_offline.in
mpirun -use-hwthread-cpus -np 10 ./coawstM.exe ocean_Y2_offline_2015.in
#mpirun -use-hwthread-cpus -np 10 ./coawstM.exe ocean_Y2_online_float.in
#