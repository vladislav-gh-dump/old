#include<stdio.h> 
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,z; 
printf(" Input A,B,C ?\n ");
scanf("%f,%f,%f",&a,&b,&c);
if(c >= 1) // Если C >= 1
{
z = c*c;
if(b > z) z = b;
if (a > z) z = a;
}
else
if(b = a) // Если b = a
{
z = sqrt(abs(a));
if (z > c*2)z = c*2;
z = z - b;
}
else
{
z = 2*b;
if (z > c*c) z = c*c;
z = z + a;
}
printf(" A = %.0f B = %.0f C = %.0f \n ",a,b,c);
printf(" Result: Z = %.0f ",z);
getch();
return;
}