#!/bin/sh
# �J�����g�f�B���N�g���ŃW���u�����s����ꍇ�Ɏw��
#$ -cwd
# �����^�C�vF 2�m�[�h���g�p
#$ -l f_node=2
# ���s���Ԃ��w��
#$ -l h_rt=24:00:00
#$ -N coawst_CT
# Module�R�}���h�̏�����
. /etc/profile.d/modules.sh
# hdf5���̓Ǎ�
module load hdf5
# Open MPI���̓Ǎ�
module load cuda
module load openmpi
export GS1=/gs/hs1/tga-NakamuLab
export LD_LIBRARY_PATH=$GS1/opt/gnu/openmpi/netcdf-c-4.6.2/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$GS1/opt/gnu/openmpi/netcdf-fortran-4.4.4/lib:$LD_LIBRARY_PATH
echo $PATH
echo $LD_LIBRARY_PATH
# �m�[�h������28�v���Z�XMPI�S56�v���Z�X���g�p
mpirun -ppn 28 -n 56 ./coawstM ocean_CT_T3.in
