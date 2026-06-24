#!/bin/bash
export HDF5_DISABLE_VERSION_CHECK=1
mpirun -use-hwthread-cpus -np 30 ./coawstM.exe ocean_Y2.in
#mpirun -use-hwthread-cpus -np 32 ./coawstM.exe coupling_Y2.in
#mpirun -use-hwthread-cpus -np 31 ./coawstG.exe coupling_Y2.in
#