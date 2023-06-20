//write C program to find the third angle of triangle if two other angles are given.

#include<stdio.h>
#include<conio.h>

void main(){
int d,e,f;

clrscr();

printf("first angle :");
scanf("%d",&d);

printf("second angle :");
scanf("%d",&e);

f = 180 - (d+e);
printf("third angle : %d",f);

getch();
}