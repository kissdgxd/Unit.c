/*
Name:George Njau
Reg:CT100/G/26242/25
Des:promting user to input both age and income.
*/

#include<stdio.h>
int main(){

int age;
  printf("Enter your age:");//promting user to enter age
  scanf("%d",&age);

float income;
  printf("Enter your income:");//promting user to input income
  scanf("%f",&income);
  
  if(age>=21&&income>=21000){
   printf("Congratulations!You are eligible for a loan:\n");//expected output if they qualify 
   }else{
   printf("Unfortunately,we are unable to offer you a loan this time: \n");// outputif they don't qualify 
   }
   return 0;
}