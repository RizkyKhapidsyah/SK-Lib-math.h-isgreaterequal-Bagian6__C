#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isgreaterequal(2.0,1.0)      = %d\n", isgreaterequal(2.0, 1.0));
    printf("isgreaterequal(1.0,2.0)      = %d\n", isgreaterequal(1.0, 2.0));
    printf("isgreaterequal(1.0,1.0)      = %d\n", isgreaterequal(1.0, 1.0));
    printf("isgreaterequal(INFINITY,1.0) = %d\n", isgreaterequal(INFINITY, 1.0));
    printf("isgreaterequal(1.0,NAN)      = %d\n", isgreaterequal(1.0, NAN));

    _getch();
    return 0;
}