#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main(){
setlocale(LC_ALL,"Russian");
printf("Лабораторная работа №3\n Вычисление координат точки\n");
printf("Ближайшей к точке Q и лежащей: \n");
printf("Выполнил: \n");
int i,k=0;
float rq,rt,r = 5,rmin = -1.0e38;
float x[7] = {2,1,4,3,1,-3,2};
float y[7] = {3,2,-3,1,-8,2,2};
float qx = -3, qy = 3;
printf(" TOЧKA Q; XQ = %.0f YQ = %.0f \n",qx,qy);
printf("R = %.0f\n",r);
printf(" X \t Y\n");
printf("--------------\n");
for(i = 0;i<7;i++){
printf(" %.0f \t %.0f\n ",x[i],y[i]);
}
printf(" \n \t Point \n");
for(i = 0;i<7;i++){
rq = sqrt(pow(x[i] - qx,2) + pow(y[i] - qy,2));
rt = sqrt(pow(x[i],2) + pow(y[i],2));
if(y[i]>0 && x[i]>0 && rt<r){
printf(" X(%d) = %.0f ", i+1, x[i]);
printf(" Y(%d) = %.0f ", i+1, y[i]);
printf(" RQ = %4.2f \n ", rq);
printf(" RT = %4.2f \n ", rt);
if(rq>rmin){
rmin = rq; k = i;
}
}
}

printf(" \t Result \n");
printf(" X(%d) = %3.0f ", k+1, x[k]);
printf(" Y(%d) = %3.0f ", k+1, y[k]);
printf(" \n RMIN = %4.2f ",rmin);
getch();
return;
}