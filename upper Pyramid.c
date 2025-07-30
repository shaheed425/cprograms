/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,k,row;
   printf("enter a rows");
   scanf("%d",&row);
   for(i=row;i>=1;i--){
       for(j=0;j<row-i;j++){
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++){
           printf("*");
       }
       printf("\n");
   }

    return 0;
}
