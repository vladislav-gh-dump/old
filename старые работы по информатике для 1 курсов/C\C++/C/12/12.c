#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
void main(){
setlocale(LC_ALL,"Russian");
printf("Лабораторная работа №4\n \n");
printf(" \n");
printf("Выполнил: \n");

int i,j,n = 5,m = 4;
char *mc[4] = {"Май","Июнь","Июль","Август"};
char *tn[5] = {"Танкер-1","Танкер-2","Танкер-3","Танкер-4","Танкер-5"};
float s,sm,am,a[5][4] = {102,99,95,101,98,
99, 90, 90,89,98,
95,98,100,99, 99,
94,99,96,107, 98};

printf(" Танкер ");
for(i = 0;i<m;i++){
printf("\t %s ",mc[i]);
}
printf("\n");
for(i = 0;i<n;i++){
printf(" %s",tn[i]);
for(j = 0;j<m;j++){
printf("\t %2.0f\t",a[i][j]);
}
printf("\n");
}
printf("\nМесяцы навигации, в которых план не выполнялся ни одним судном:\n");
for(j = 0;j<m;j++){
s = 0;
sm = 0;
am = 100;
for(i = 0;i<n;i++){
if(a[i][j]<am){
s = s+1;


}
}
sm = s;
if(sm==5){
printf(" %s ",mc[j]);
}
}


getch();
return;
}