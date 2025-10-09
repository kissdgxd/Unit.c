/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Des:ATM withdrawals 
*/

#include<stdio.h>
int main(){
int amount; 
int balance=10000;//start of the loop
printf("your current balance is%d \n",balance);//telling the user what he initially has in his account 

while(balance>0)// condition for the loop to stop
{
     printf("Enter amount you wish to withdraw \n");// promting user to input amount to withdraw 
     scanf("%d",&amount);
     balance-=amount ;// giving directive
     printf("your current balance is %d \n", balance);//amount left after withdrawal 
}
return 0;
}