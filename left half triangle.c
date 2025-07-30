/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    int row;
    printf("enter a row");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    

    return 0;
}
