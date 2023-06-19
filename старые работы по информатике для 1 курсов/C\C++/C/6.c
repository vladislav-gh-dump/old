#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x, float y);
void main(){
float a = 1,b = 2.7;
const float pi = 3.1415;
float r,w,q,z;
// Вычисление R,W,Q,Z
r = f(3.0,4*pi/180);
w = f(-a,2*b);
q = f(b,pi/3);
z = r/(sqrt(abs(w)))+(q*q);
// Вывод A,B,Z
printf(" A = %.0f",a);
printf(" B = %.1f\n",b);
printf(" Z = %.2f",z);
getch();
return;
} float f(float x,float y)
{
return(exp(x)-cos(y));
}