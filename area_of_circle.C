#include<stdio.h>
#include<conio.h>
void main()
{
 int radius;
 float pi=3.142,area;
 clrscr();
 printf("\n Enter the radius of the circle:");
 scanf("%d",&radius);
 area=pi*radius*radius;
 printf("\n Area of circle is %f",area);
 getch();
}
