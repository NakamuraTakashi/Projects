#!/bin/sh
## Run in current working directory
#$ -cwd
## Resource type F: qty 2
#$ -l f_node=1
## maximum run time
#$ -l h_rt=1:00:00
#$ -N Y2_OFF_BIO
## Initialize module command
. /etc/profile.d/modules.sh

module load cuda pgi
module load openmpi
module load hdf5-parallel
module load netcdf-parallel
## 28 process per node, all MPI process is 28
mpirun -x LD_LIBRARY_PATH -npernode 28 -n 28 ./coawstM ocean_yaeyama2_T3.in
