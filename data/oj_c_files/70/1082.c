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
int n,i,j;
float a[100][2];
float s,max=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%f %f",&a[i][0],&a[i][1]);
for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
{
if(((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]))>max)
max=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
}
s=sqrt(max);
printf("%0.4f",s);
getchar();
getchar();
getchar();
}
