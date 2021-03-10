@echo 输入commit
set /p pw=input 

git commit -m %pw%
git pull --rebase origin master
git push origin master
pause