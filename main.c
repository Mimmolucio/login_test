#include "func.h"
#include <stdio.h>

struct User
{
    char *name;
    char *password;
};

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
        signUp();
    }
    else
    {
        printf("Please enter 1 or 2\n");
    }

    return 0;
}