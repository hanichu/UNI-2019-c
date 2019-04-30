polish: polish.o stackfloat.o stackexp.o
	gcc --pedantic polish.o stackfloat.o stackexp.o -o polish

polish.o: polish.c stackfloat.h stackexp.h
	gcc --ansi --pedantic -c polish.c -o polish.o

stackfloat.o: stackfloat.c stackfloat.h
	gcc --ansi --pedantic -c stackfloat.c -o stackfloat.o

stackexp.o: stackexp.c stackexp.h
	gcc --ansi --pedantic -c stackexp.c -o stackexp.o


clean:
	rm *.o
	rm polish

