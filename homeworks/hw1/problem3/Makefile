CC=gcc
OBJ=alphabet.o
EXE=alphabet.exe

%.o: %.c
	$(CC) -c -o $@ $<

$(EXE): $(OBJ)
	$(CC) -o $@ $^

.PHONY: clean

clean:
	/bin/rm -f $(OBJ) $(EXE)
