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

int main()
{
int a,b,c,d,e,f,s,i;
for(i=1;a!=0;i++){
scanf("%d" "%d" "%d" "%d" "%d" "%d",&a,&b,&c,&d,&e,&f);
if (a==0){
break;}
f=f-c;
if(e>=b){
	e=(e-b)*60;}
else if(e<b){
	e=(60+e-b)*60;
b=-1;}
if(b==-1){
	d=(11+d-a)*3600;}
else if(b!=-1){
	d=(12+d-a)*3600;}    
s=d+e+f;
printf("%d\n",s);}
return 0;
}