#!/bin/sh
# カレントディレクトリでジョブを実行する場合に指定
#$ -cwd
# 資源タイプF 2ノードを使用
#$ -l f_node=1
# 実行時間を指定
#$ -l h_rt=24:00:00
#$ -N coawst_Y1
# Moduleコマンドの初期化
. /etc/profile.d/modules.sh
# Intel Compiler環境の読込
module load intel
module load hdf5
# Intel MPI環境の読込
module load intel-mpi
export GS1=/gs/hs1/tga-NakamuLab
export LD_LIBRARY_PATH=$GS1/opt/intel/netcdf-c-4.4.1.1/lib64:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$GS1/opt/intel/netcdf-fortran-4.4.4/lib:$LD_LIBRARY_PATH
echo $PATH
echo $LD_LIBRARY_PATH
# ノードあたり28プロセスMPI全56プロセスを使用
mpiexec.hydra -ppn 28 -n 28 ./coawstM ocean_yaeyama1_14_T3.in
