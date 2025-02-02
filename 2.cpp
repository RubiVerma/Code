#include<stdio.h>
int main()
{
int base,height;
float area;
printf("Enter the base of the triangle: ");
scanf("%d",&base);
printf("Enter the height of the triangle: ");
scanf("%d",&height);
area = height*base*0.5;
printf("%f",area);
return 0;
}
