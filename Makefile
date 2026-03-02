ABC.exe: main.c big.c fact.c
	gcc main.c big.c fact.c -o ABC.exe

clean:
	rm -f ABC.exe
