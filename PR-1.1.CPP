//write a program to convert temperature from degrees celsius to fahrenheit.

#include<stdio.h>
#include<conio.h>

void main(){
int f,c;
clrscr();
printf("the temperature in celsius:");
scanf("%d",&c);
f = (c *9/5)+32;
printf("the temperature in fahrenheit : %d",f);
getch();
}