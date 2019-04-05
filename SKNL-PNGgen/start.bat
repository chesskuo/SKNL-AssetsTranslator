@echo off

cls

rd /S/Q tmp\ pic\
mkdir tmp\ pic\

echo [*] Decoding...

dir /B .. > name.txt

for /F %%i in (name.txt) do (
	if NOT %%i == SKNL-PNGgen (
		unlzs.exe --no-header-test -d ..\%%i tmp
		ByteCut.exe "tmp\%%i.dec" "pic\%%i.png"
		echo [-] %%i OK!
	)
)

del /Q name.txt
rd /S/Q tmp

echo [*] Finished!