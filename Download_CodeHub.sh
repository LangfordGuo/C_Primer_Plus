#bin/bash
echo this is a shell script for download code on HUAWEI CodeHub
export current_Path=$(pwd)
if [ -d ../C_Primer_Plus ];then
	echo 项目已经存在，直接更新git pull
	cd ${current_Path}/C_Primer_Plus
	git pull || exit 1
	exit 0
else
	echo 当前路径不存在项目文件夹，需要下载完整的代码
	cd ${current_Path} 
	git clone git@codehub.devcloud.cn-east-3.huaweicloud.com:CPrimerPluszwb00001/C_Primer_Plus.git || exit 1
	cd ${current_Path}/C_Primer_Plus
	git pull || exit 1
	exit 0
fi

echo Code is already up to date,exit now...