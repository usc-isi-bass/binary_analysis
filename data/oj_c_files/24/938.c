#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
char str[500];
int i,j,longest=0,shortest=20,lenth,k=-1,a,b,c,d;
gets(str);
for(i=0;str[i]!='\0';i++)
{if(str[i]==' ')
{lenth=i-k;
if(lenth>longest)
{longest=lenth;
a=i;
b=k;}
if(lenth<shortest)
{shortest=lenth;
c=i;
d=k;}
k=i;}}
if(str[i]=='\0')
{lenth=i-k;
if(lenth>longest)
{longest=lenth;
a=i;
b=k;}
if(lenth<shortest)
{shortest=lenth;
c=i;
d=k;}
}
for(j=b+1;j<a;j++){
printf("%c",str[j]);}
printf("\n");
for(j=d+1;j<c;j++){
printf("%c",str[j]);}
return 0;
}
