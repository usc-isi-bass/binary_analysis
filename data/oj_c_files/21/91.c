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
{int n,i,j;
float a[300],b[300],averge,sum=0,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%f",&a[i]);
sum=sum+a[i];}
averge=sum/n;
for(i=0;i<n;i++)
{if(fabs(a[i]-averge)>max)
{max=fabs(a[i]-averge);
j=1;
b[j]=a[i];
continue;}
if(fabs(a[i]-averge)==max)
{j++;
b[j]=a[i];}
}

if(j==1) printf("%.0f",b[1]);
else {for(i=1;i<j;i++) printf("%.0f,",b[i]);
printf("%.0f",b[j]);}
}



