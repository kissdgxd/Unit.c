/*
Name:George Njau Ngigi
Reg:CT100/G/26242/25
DES:promting user to enter height phone number and weight 
*/

 #include<stdio.h>

int main()//pre-processor directive scanf ()
{   
    float height;
    printf("Enter your height:");
    scanf("%f",&height);
    printf("Your height is %f\n",height);
    
    float weight;
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Your weight is %f\n",weight);
    
    char phone;
    printf("Enter your phone");
    scanf("%s",&phone);
    printf("Your phone is %s",phone);
}