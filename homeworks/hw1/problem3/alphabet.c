#include <stdio.h>
int main () {
    printf("Hello, world!\a"); /* no error */
    printf("Hello, world!\b"); /* no error */
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!\e"); /* no error */
    printf("Hello, world!\f"); /* no error */
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!\n"); /* no error */
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!");
    printf("Hello, world!\r"); /* no error */
    printf("Hello, world!");
    printf("Hello, world!\t"); /* no error */
    printf("Hello, world!\u00B6"); /* unicode code point needed, inserted "00B6" */
    printf("Hello, world!\v"); /* no error */
    printf("Hello, world!");
    printf("Hello, world!\xB6"); /* hexadecimal needed, inserted "B6" */
    printf("Hello, world!");
    printf("Hello, world!");
}
