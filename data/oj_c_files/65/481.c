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
int a,b,i,n,t=0,m=0,p=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a,&b);
if(a==0&&b==0)
p++;
if(a==0&&b==1)
t++;
if(a==0&&b==2)
m++;
if(a==1&&b==0)
m++;
if(a==1&&b==1)
p++;
if(a==1&&b==2)
t++;
if(a==2&&b==0)
t++;
if(a==2&&b==1)
m++;
if(a==2&&b==2)
p++;}
if(t>m)
printf("A");
else if(t<m)
printf("B");
else if(t==m||p==n)
printf("Tie");
	return 0;}