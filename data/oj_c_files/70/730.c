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

main()
{
int n;
scanf("%d",&n);
int i;
float c[100][2];
for(i=0;i<n;i++)
scanf("%f%f",&c[i][0],&c[i][1]);
int k;
int m=0;
float juli[100];
for(i=0;i<n;i++)
for(k=i+1;k<n;k++)
{
juli[m]=(c[i][0]-c[k][0])*(c[i][0]-c[k][0])+(c[i][1]-c[k][1])*(c[i][1]-c[k][1]);
m++;
}
float f=0;
for(i=0;i<m;i++)
if(juli[i]>f)
f=juli[i];
printf("%.4f",sqrt(f));
}

