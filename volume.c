/*
Name:George Njau
Reg:CT100/G/26242/25
Des:promting user to inputheight radius of a cylinder to get volume and surface area
*/

#include<stdio.h>
#define PI 3.14159

int main(){
   float radius,height;
   float volume,surface_area;
   printf("Enter radius of the cylinder:");
   scanf("%f",&radius);
   printf("Enter height of cylinder:");
   scanf("%f",&height);
   
   volume=PI*radius*height;
   surface_area=2*PI*radius*radius+2*PI*radius*height;
   printf("volume=%.2f\n",volume);
   printf("surface-area=%.2f",surface_area);
   return 0;
}