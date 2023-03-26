set /p var=pleause input commit:
git add *
git commit -m %var%
git push
