#bin/bash
echo this is a shell script for download code on HUAWEI CodeHub
export Commit_Message=$1
export current_Path=$(pwd)
cd ${current_Path}
echo 当前目录是`pwd`
echo ===git状态：`git status|awk -F "[ :]+" 'NR==4 {print $1}'` ====
if [ "Untracked" = "$(git status|awk -F "[ :]+" 'NR==4 {print $1}')" ] || [ "Changes" = "$(git status|awk -F "[ :]+" 'NR==4 {print $1}')" ];then
	echo 代码有改动，开始提交变更代码.....
	if [ $# = 0 ];then
		echo 未输入提交信息，请在脚本后加入提交代码信息！并用双引号括起来。
		exit 1
	else
		echo 本次提交的信息是
		echo $Commit_Message
		git add .
		git commit -m "$Commit_Message"
		git push
	fi
	
	exit 0
else
	echo 代码未改动，开始更新代码......
	git pull || exit 1
	exit 0
fi

echo Code is already up to date,exit now...