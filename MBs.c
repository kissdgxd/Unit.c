/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
Des:promting user to buy MBs
*/

#include<stdio.h>
int main(){ 
printf("Chose your preferred mobile data bundle\n");// dispaly of their preference so as the user can chose
printf("1.100MB -50KES\n");
printf("2.500MB -200KES\n");
printf("3.1GB -350KES\n");
printf("4.2GB -600KES\n");

int choice;
  printf("please enter your choice\n:");
  scanf("%d",&choice);
//dependeon what the user chooses then the cide switches to that choice 
switch(choice){
 case 1:
  printf("you have selected 100MB for 50KES\n");
  break;
 case 2:
  printf("you have selected 500MB for 200KES\n");
  break;
 case 3:
  printf("you have selected 1GB for 350KES\n");
  break;
 case 4:
  printf("you have selected 2GB for 600KES\n");
  break;
 default:
  printf("invalid choice.\n");
  }//if the user unputs the wrong thing that is not available on the list
return 0;
}