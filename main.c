/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int total,total1,maths,chemistry,physics;
    printf("enter obtained mark in maths:");
    scanf("%d",&maths);
    
    printf("enter obtained mark of chemistry :");
    scanf("%d",&chemistry);
    
    printf("enter obtained mark of physics :");
    scanf("%d",&physics);
    
    total=maths+chemistry+physics;
    total1=maths+physics;
    
    printf("total of all subjects is :%d\n",total);
    printf("total of maths and physics subjects is :%d\n",total1);
    
    if(maths>=65 && physics>=55 && chemistry>=50 && total>= 190 || total1>=140){
    printf("eligible for professional course");
    }
    else{
        printf("not eligible");
    }




    return 0;
}