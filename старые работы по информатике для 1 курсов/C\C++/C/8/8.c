#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
void main(){

setlocale(LC_ALL,"Russian");
printf("Лабораторная работа №4\n \n");
printf("Превышает ли средний процент выполнения плана 100%? \n");
printf("Выполнил: \n");

int i,j,k;
char *mc[4] = {"May","June","July","August"};
char *tn[5] = {"Tankep-1","Tankep-2",
"Tankep-3","Tankep-4","Tankep-5"};
float sr=0, s = 0, a[5][4] = {102, 99,108,103,
98,100, 90, 93,
101,103, 100,105,
100,102, 100,104,
97,106,107, 98};

printf(" Tankep ");
for(i = 0;i<4;i++){
printf("\t %s ",mc[i]);
}
printf("\n");
for(i = 0;i<5;i++){
printf(" %s",tn[i]);
s = 0;
for(j = 0;j<4;j++){
printf("\t %2.0f\t",a[i][j]);
s = s+a[i][j];
}
sr = s/4;
printf(" %.2f",sr);
if(sr>=100){printf(" превышает 100%");}else{printf(" не превышает 100%");}
if(sr==100){printf(" = 100%");}
printf("\n");
}


getch();
return;
}