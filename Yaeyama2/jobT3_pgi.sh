#!/bin/sh
## Run in current working directory
#$ -cwd
## Resource type F: qty 2
#$ -l f_node=2
## maximum run time
#$ -l h_rt=12:00:00
#$ -N COAWST_Y2
## Initialize module command
. /etc/profile.d/modules.sh

module load cuda pgi
module load openmpi
module load hdf5
module load netcdf-parallel
## 28 process per node, all MPI process is 56
mpirun -use-hwthread-cpus -x LD_LIBRARY_PATH -npernode 28 -n 56 ./coawstM ocean_yaeyama2_19_T3.in
