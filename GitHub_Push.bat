set /p var=请输入更新内容:
git add *
git commit -m %var
git push
cmd