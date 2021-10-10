#include <conio.h>
#include<stdio.h>
struct finder {
int a [10],c,x,y;
}s;
int main (){
int x=0,y=0,z;

printf ("give the array\n");
for (s.c=0;s.c<10;s.c++)
{
scanf ("%d",&s.a[s.c]);
}
printf("give the num to search\n");
scanf("%d",&x);
for  (s.c=0;s.c<10;s.c++){
if ( s.a[s.c] % x == 0)
{
y++;
z=s.c;
printf("ur no. is used on index number %d\t\n",z);
}}
printf("\nur no. is used %d times ",y);
}
