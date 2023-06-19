#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<locale.h>
void main(){
setlocale(LC_ALL,"Russian");
printf("Лабораторная работа №3(1)\n \n");
printf("Средний процент выполнения плана в течение тех месяцев, когда план перевыполнялся \n");
printf("Выполнил: \n");

int i;
float s = 0, srmax;
float a[12] = {101,98,100,102,97,105,
99,107,96,111,100,98};

printf(" \t\t \t Percent \n");
float si = 0;
for(i = 0;i<12;i++) {
printf(" %.0f ",a[i]);
if(a[i]>100){
s += a[i];
si++;
}
}
srmax = s/si;
printf(" \n\n sr.max = %.2f \n ",srmax);

getch();
return;
}