vim alphabet.c  
**Program**  

#include <stdio.h>  
int main () {  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\a"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\b"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\e"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\f"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\n"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\r"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\t"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\u00B6"); /\* unicode code point needed, inserted "00B6" \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\v"); /\* no error \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!\xB6"); /\* hexadecimal needed, inserted "B6" \*/  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
&nbsp;&nbsp;&nbsp;&nbsp;printf("Hello, world!");  
}  

**1. Testing each letter, attempted escape sequences that gave warnings were removed. Errors were fixed accordingly.**   

**Using make~**  
**vim Makefile**  
CC=gcc  
OBJ=alphabet.o  
EXE=alphabet.exe  

%.o: %.c   
&nbsp;&nbsp;&nbsp;&nbsp;$(CC) -c -o $@ $<  

$(EXE): $(OBJ)  
&nbsp;&nbsp;&nbsp;&nbsp;$(CC) -o $@ $^  

.PHONY: clean  

clean:  
&nbsp;&nbsp;&nbsp;&nbsp;/bin/rm -f $(OBJ) $(EXE)  

**make -f Makefile**

**2. To execute program:**  
&nbsp;&nbsp;&nbsp;&nbsp;./alphabet.exe  

**3. The resulting output is:**  
Hello, world!Hello, worldHello, world!Hello, world!Hello, world!ello, world!  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!  
Hello, world!Hello, world!Hello,Hello, world!¶Hello, world!  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Hello, world!Hello, world!?Hello, world!Hello, world!%
