@echo off
cls

echo 1. Open the CMD with CompetitiveProgramming\
echo 2. Commit the programs
set/p "opt1="
if %opt1%==2 goto Commit
if %opt1%==1 goto Else
goto End

:Commit
echo ========================================================================================================================
echo 1.CodeForces
echo 2.CodeChef
set/p "opt2="
if %opt2%==1	goto CodeForces
if %opt2%==2	goto CodeChef
goto Commit

:CodeChef
setlocal
set "Dir=C:\Users\OjusWiZard\source\repos\CodeChef\"
set "Ext=*.cpp"
pushd %Dir%
for %%a in (%Ext%) do (
	echo To copy %%a in CompetitiveProgramming\CodeChef\
	pause
	copy /-Y %%a "C:\Users\OjusWiZard\source\repos\CompetitiveProgramming\CodeChef\"
)
popd
endlocal
echo ========================================================================================================================
cd C:\Users\OjusWiZard\source\repos\CompetitiveProgramming\
git add *
git status
echo ========================================================================================================================
echo Enter message to commit:
set/p "message="
git commit -m "%message%"
echo ========================================================================================================================
echo To Push
pause
git push
pause
goto End

:CodeForces
setlocal
set "Dir=C:\Users\OjusWiZard\source\repos\CodeForces\"
set "Ext=*.cpp"
pushd %Dir%
for %%a in (%Ext%) do (
	echo To copy %%a in CompetitiveProgramming\CodeForces\
	pause
	copy /-Y %%a "C:\Users\OjusWiZard\source\repos\CompetitiveProgramming\CodeForces\"
)
popd
endlocal
echo ========================================================================================================================
cd C:\Users\OjusWiZard\source\repos\CompetitiveProgramming\
git add *
git status
echo ========================================================================================================================
echo Enter message to commit:
set/p "message="
git commit -m "%message%"
echo ========================================================================================================================
echo To Push
pause
git push
pause
goto End

:Else
cls
cmd.exe /K "cd C:\Users\OjusWiZard\source\repos\CompetitiveProgramming\ && git status"

:End
exit