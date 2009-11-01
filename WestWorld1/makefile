all: westworld.exe

clean:
	-del *.obj westworld.exe

westworld.exe : %.obj
	cl /Fe$@ $^
%.obj : %.cpp
	cl /Zi /c $<

