@echo off
echo    1 - local
echo    2 - distributed


set /p choice=Please enter your choice: 
if '%choice%'=='1' goto set_local_environment
if '%choice%'=='2' goto set_distributed_environment


goto done2

:set_local_environment
copy /Y .\����make2.pl .\make2.pl >nul
copy /Y .\make\����Gsm2.mak .\make\Gsm2.mak >nul
goto done

:set_distributed_environment
copy /Y .\�ֲ�make2.pl .\make2.pl >nul
copy /Y .\make\�ֲ�Gsm2.mak .\make\Gsm2.mak >nul
goto done

:done

:done2
call .\mk.bat