/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,size=5;
    for(i=0;i<=size;i++){
        for(j=0;j<=size-i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}