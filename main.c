/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,size=4,s;
    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
           
            printf("*");
        }
        for(s=1;s<=2*(size-i);s++){
            printf(" ");
        }
       
        for(j=1;j<=i;j++){
            printf("*");
        }
         printf("\n");
       
        
    }
    
     for(i = size; i >= 1; i--) {
       
        for(k = 1; k <= i; k++) {
            printf("*");
        }

        
        for(s = 1; s <= 2*(size - i); s++) {
            printf(" ");
        }

       
        for(k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }
    

    return 0;
}