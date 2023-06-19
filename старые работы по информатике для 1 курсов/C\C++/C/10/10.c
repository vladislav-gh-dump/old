#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x, float y);
void main(){
float a = 2,b = -3;
const float pi = 3.1415;
float r,w,q,z;
// Вычисление R,W,Q,Z
r = f(b,a);
w = f(3*pi/180,2);
q = pow(f(a,abs(b)),2);
z = (r/(b*w))+q;
// Вывод A,B,Z
printf(" A = %.1f",a);
printf(" B = %.0f\n",b);
printf(" Z = %.4f",z);
getch();
return;
} float f(float x,float y)
{
return(pow(sin(x),2)+log(y));
}