#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    greeting();

    int x = getInt();

    if (x == 1)
    {
        printf("LOGIN\n");
    }
    else if (x == 2)
    {
        printf("SIGN UP\n");
    }
    else
    {
        printf("Please enter 1 or 2\n");
    }

    return 0;
}