/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
DES:promting user to input their attendance and marks to determine if they are eligible for the final exam.
*/

 #include<stdio.h>

int main()//pre-processor directive scanf ()
{   
   int attendance,average_marks;//declairing variables 
     
     printf("Enter your attendance: ");//promting user to input their attendance 
     scanf("%d",&attendance);
     
     printf("Enter your average_marks:");//promting user to input their average marks
     scanf("%d",&average_marks);
     
  if(attendance>=75&&average_marks>=40)
   {
  printf("you are eligible for final exams");
  }else{
  printf("you are not eligible for final exams");}
  return 0;
 }