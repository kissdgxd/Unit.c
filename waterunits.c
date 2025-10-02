/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Desc:Promting user to input water units consumed and for it to display  total bill in kes with 2 decimal points 
*/

#include<stdio.h>
int main(){

float bill;//introducing the decimal that will be our output
int unit;//introducing our units that will be used

printf("Enter number of units used:");//promting user to input units used
scanf("%d",&unit);

if(unit>=0&&unit<=30){bill=unit*20;}//asigning the units to the bills charged
else if(unit>=31&&unit<=60){bill=unit*25;}
else if (unit >60){bill=unit*30;}

printf("your total bill is kes: %.2f",bill);//output statement 
}
    