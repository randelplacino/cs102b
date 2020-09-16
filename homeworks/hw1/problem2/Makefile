CC=gcc
OBJ=repeat.o
EXE=repeat.exe

%.o: %.c
	$(CC) -c -o $@ $<

$(EXE): $(OBJ)
	$(CC) -o $@ $^

.PHONY: clean

clean:
	/bin/rm -f $(OBJ) $(EXE)
