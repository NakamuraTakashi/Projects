#!/bin/sh
# �J�����g�f�B���N�g���ŃW���u�����s����ꍇ�Ɏw��
#$ -cwd
# �����^�C�vF 2�m�[�h���g�p
#$ -l f_node=1
# ���s���Ԃ��w��
#$ -l h_rt=24:00:00
#$ -N coawst_Y1
# Module�R�}���h�̏�����
. /etc/profile.d/modules.sh
# Intel Compiler���̓Ǎ�
module load intel
module load hdf5
# Intel MPI���̓Ǎ�
module load intel-mpi
export GS1=/gs/hs1/tga-NakamuLab
export LD_LIBRARY_PATH=$GS1/opt/intel/netcdf-c-4.4.1.1/lib64:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$GS1/opt/intel/netcdf-fortran-4.4.4/lib:$LD_LIBRARY_PATH
echo $PATH
echo $LD_LIBRARY_PATH
# �m�[�h������28�v���Z�XMPI�S56�v���Z�X���g�p
mpiexec.hydra -ppn 28 -n 28 ./coawstM ocean_yaeyama1_14_T3.in
