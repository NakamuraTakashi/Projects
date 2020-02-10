#!/bin/sh
# カレントディレクトリでジョブを実行する場合に指定
#$ -cwd
# 資源タイプF 2ノードを使用
#$ -l f_node=2
# 実行時間を指定
#$ -l h_rt=24:00:00
#$ -N coawst_CT
# Moduleコマンドの初期化
. /etc/profile.d/modules.sh
# hdf5環境の読込
module load hdf5
# Open MPI環境の読込
module load cuda
module load openmpi
export GS1=/gs/hs1/tga-NakamuLab
export LD_LIBRARY_PATH=$GS1/opt/gnu/openmpi/netcdf-c-4.6.2/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$GS1/opt/gnu/openmpi/netcdf-fortran-4.4.4/lib:$LD_LIBRARY_PATH
echo $PATH
echo $LD_LIBRARY_PATH
# ノードあたり28プロセスMPI全56プロセスを使用
mpirun -ppn 28 -n 56 ./coawstM ocean_CT_T3.in
