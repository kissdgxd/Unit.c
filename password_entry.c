/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Des:password entry 
*/

#include<stdio.h>
int main(){
   int pwd;
   int i=0;//start
   int password =1234;//exact password number entries
   
   do{
    printf("Enter your password:\n");//promts user to input their password 
   scanf("%d",&pwd);//scan for password entered 
     }
     
   while (pwd!=password);//stop
   printf("Access granted");
return 0;
}