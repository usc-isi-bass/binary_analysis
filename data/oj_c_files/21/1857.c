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

void main()
{
int a[300]={0},n,i,min,max;
float sum=0,ave,mid,mad;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);sum=sum+(float)a[i];}
ave=sum/n;
min=a[0];max=a[0];
for(i=0;i<n;i++){if(a[i]<min)min=a[i];if(a[i]>max)max=a[i];}
mid=ave-min;mad=max-ave;
if(mid>mad)printf("%d\n",min);
else if(mid<mad)printf("%d\n",max);
else printf("%d,%d\n",min,max);
}