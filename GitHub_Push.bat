set /p var=pleause input commit:
git add *
pause
git commit -m %var%
git push
cmd