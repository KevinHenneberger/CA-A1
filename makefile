all:	Voter

Voter:	Voter.o VoterDB.o
	g++ Voter.o VoterDB.o -o Voter.exe

Voter.o:	Voter.cpp VoterDB.h
	g++ -c Voter.cpp

VoterDB.o:	VoterDB.cpp VoterDB.h
	g++ -c VoterDB.cpp

clean:
	rm -f *.o Voter.exe