/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#define size 5

  char stack[size];
  int top=-1;
 


 void push(char value){
 if(top ==size-1){
     printf("\n stack is full");
 }
     else{
         top ++;
         stack[top]=value;
         printf("\n insertion completed: %c pushed at position %d\n",value,top);
     }
 }
 void display(){
 if (top == -1){
     printf("stack is empty");
 }
     else{
         printf("stack element are:");
         for( int i=0; i<= top; i++){
             printf(" %c",stack [i]);
         }
         printf("\n");
     }
     }
     void pop(){
         if(top==-1){
             printf("stack is empty");
         }
         else{
             printf("\n deleted  %c \n",stack[top]);
             top--;
         }
         
     }
 
 int main(){
 char value;
 printf("you can push up to %d elements\n",size);
 for(int i=0;i< size;i++){
     printf("enter character to push");
     scanf(" %c",&value);
     push(value);
     display();

 }
 pop();
 display();
 return 0;
 }