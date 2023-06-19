#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main(){
setlocale(LC_ALL,"Rassian");
printf("Лабораторная работа №3\n \n");
printf(" \n");
printf("Выполнил: \n");
int i,k=0;
float rt,r = 5,rmax = -1.0e38;
float x[6] = {3,-4,3,1,2,-1};
float y[6] = {-2,-4,1,2,6,-3};
printf("R = %.0f \n",r);
printf(" X \t Y\n");
printf("--------------\n");
for(i = 0;i<6;i++){
printf(" %.0f \t %.0f\n ",x[i],y[i]);
}
printf(" \n \t Point \n");
for(i = 0;i<6;i++){
rt = sqrt(pow(x[i],2) + pow(y[i],2));
if(y[i]<0 && rt<r){
printf(" X(%d) = %.0f ", i+1, x[i]);
printf(" Y(%d) = %.0f ", i+1, y[i]);
printf(" RT = %4.2f \n ", rt);
if(rt>rmax){
rmax = rt; k = i;
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