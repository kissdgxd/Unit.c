/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Des:passwentry 
*/

#include<stdio.h>
int main(){
   int pwd;
   int i=0;
   int password =1234;
   
   do{
    printf("Enter your password:\n");
   scanf("%d",&pwd);
     }
     
   while (pwd!=password);
   printf("Access granted");
return 0;
}