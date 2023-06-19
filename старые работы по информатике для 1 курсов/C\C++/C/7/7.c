#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main(){
//
setlocale(LC_ALL,"Russian");
printf("Лабораторная работа №3\n \n");
printf(" \n");
printf("Выполнил: \n");
//
int i,k=0;
float min = 1000;
float x[8] = {2,-4,3,3,2,-4,-3,-1};
float y[8] = {-1,8,-7,1,2,2,7,-2};

printf("Координаты точек:\n");
for(i = 0;i<8;i++){
printf(" %.0f ",x[i]);
}
printf("\n");
for(i = 0;i<8;i++){
printf(" %.0f ",y[i]);
}
printf("\n\nверхняя полуплоскость: \n");
for(i = 0;i<8;i++){
if(x[i]>0 && y[i]>0){
printf(" X(%d) = %.0f Y(%d) = %.0f \n", i+1, x[i], i+1, y[i]);
if (x[i]<min){
min = x[i]; k = i;
}
}
}
printf("\nТочки с наименьшей абсциссой среди точек верхней полуплоскости\n");
printf(" X(%d) = %.0f Y(%d) = %.0f \n", k+1, x[k], k+1, y[k]);



getch();
return;
}
