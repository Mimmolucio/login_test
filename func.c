#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int getInt() {
    int x = getchar();
    return x - '0';
}




void greeting() {
    system("clear");
    printf("WELCOME\n\n");
    printf("Would you like to Login (1) or Sign Up (2)? ");
}