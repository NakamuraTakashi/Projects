#!/bin/sh
## Run in current working directory
#$ -cwd
## Resource
#$ -l cpu_40=1
## maximum run time
#$ -l h_rt=00:10:00
#$ -p -5
#$ -N COAWST_eco_yuta_shiraho_2009
## Initialize module command
module purge

module load openmpi/5.0.2-gcc
module load hdf5-parallel/1.14.3/gcc11.4.1
module load netcdf-parallel/4.9.2/gcc11.4.1
## all MPI process is 40
mpirun -x LD_LIBRARY_PATH -npernode 40 -n 40 ./coawstM coupling_shiraho_reef_20090101.in
