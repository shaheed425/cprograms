/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float h;
    printf("enter your height in centimeter :");
    scanf("%f",&h);
    if(h<150){
        printf(" your very short");
    }
    else if(h>=150 && h<=170){
        printf(" your average");
    }
    else{
        printf("your very tall");
    }

    return 0;
}