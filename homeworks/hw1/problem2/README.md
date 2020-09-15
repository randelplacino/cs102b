vim repeat.c  
**Program:**    

#include <stdio.h>  
int main () {  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int count, limit;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;count = 0;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;limit = 3;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;while (count < limit) {  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printf("Cue the sun!\n");  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;count = count + 1;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return(0);  
}  

**1. After saving and exiting with a new name (repeat.c),**  
&nbsp;&nbsp;&nbsp;&nbsp;gcc repeat.c  
&nbsp;&nbsp;&nbsp;&nbsp;gcc -o repeat repeat.c

**Using make~**  
**vim Makefile**  
CC=gcc  
OBJ=repeat.o  
EXE=repeat.exe  

%.o: %.c   
&nbsp;&nbsp;&nbsp;&nbsp;$(CC) -c -o $@ $<  

$(EXE): $(OBJ)  
&nbsp;&nbsp;&nbsp;&nbsp;$(CC) -o $@ $^  

.PHONY: clean  

clean:  
&nbsp;&nbsp;&nbsp;&nbsp;/bin/rm -f $(OBJ) $(EXE)  


**2. To run the program, type,**  
&nbsp;&nbsp;&nbsp;&nbsp;./repeat.exe  

**3. The output is the following,**  
&nbsp;&nbsp;&nbsp;&nbsp;Cue the sun!  
&nbsp;&nbsp;&nbsp;&nbsp;Cue the sun!  
&nbsp;&nbsp;&nbsp;&nbsp;Cue the sun!  
