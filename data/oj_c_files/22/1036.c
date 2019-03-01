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
int a[300],n,i,j,max,sec;
char c;
i=0;
do
{
scanf("%d%c",&a[i],&c);
i++;
}
while(c!='\n');
n=i;
max=a[0];
sec=-1;;
for(i=1;i<n;i++)
{
if(a[i]>max){sec=max;max=a[i];}
else if(a[i]<max&&a[i]>sec)sec=a[i];
else ;
}
if(sec!=-1) printf("%d",sec);
else printf("No");
return 0;
}