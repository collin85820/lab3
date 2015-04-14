lab3_b : clock.o sort.o
	g++ -o lab3_b clock.o sort.o

clock.o : clock.h clock.cpp
	g++ -c clock.h clock.cpp

sort.o : sort.cpp clock.o
	g++ -c sort.cpp

clean:
	rm lab3 *.o
