/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,size=4;
    for(i=1;i<=size;i++){
        for(j=1;j<=size-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf(" %d",i);
        } 
        printf("\n");

        
    }
    

    return 0;
}
