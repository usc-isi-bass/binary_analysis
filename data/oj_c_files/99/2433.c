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
int n,i;
double t,s,h,y,lt,ls,lh,ly;
int k[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d ",&k[i]);
if(k[i]<=18)
t++;
else if(k[i]>18&&k[i]<=35)
s++;
else if(k[i]>35&&k[i]<=60)
h++;
else if(k[i]>60)
y++;
}
t=(double)t/n;
s=(double)s/n;
h=(double)h/n;
y=(double)y/n;
lt=100*t;
ls=100*s;
lh=100*h;
ly=100*y;
printf("1-18: %.2lf%\n",lt);
printf("19-35: %.2lf%\n",ls);
printf("36-60: %.2lf%\n",lh);
printf("60??: %.2lf%\n",ly);
return 0;
}
