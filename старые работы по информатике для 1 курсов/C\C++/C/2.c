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
float rq,r = 4,rmax = -1.0e38;
float x[7] = {2,4,-4,3,2,3,3};
float y[7] = {-3,2,-7,1,1,-2,7};
float qx = -2, qy = 4;

printf(" TOЧKA Q; XQ = %.0f YQ = %.0f \n",qx,qy);
printf(" R = %.0f\n",r);
printf(" X \t Y\n");
printf("--------------\n");
for(i = 0;i<7;i++){
printf(" %.0f \t %.0f\n ",x[i],y[i]);
}
printf(" \n \t Point \n");
for(i = 0;i<7;i++){
rq = sqrt(pow(x[i] - qx,2) + pow(y[i] - qy,2));
if(x[i]>0 && y[i]<0 && rq>r){
printf(" X(%d) = %.0f ", i+1, x[i]);
printf(" Y(%d) = %.0f ", i+1, y[i]);
printf(" RQ = %4.2f \n ", rq);
if(rq>rmax){
rmax = rq; k = i;
}
}
}

printf(" \t Result \n");
printf(" X(%d) = %3.0f ", k+1, x[k]);
printf(" Y(%d) = %3.0f ", k+1, y[k]);
printf(" \n RMAX = %4.2f ",rmax);
getch();
return;
}