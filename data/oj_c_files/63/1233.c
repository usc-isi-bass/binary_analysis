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
int x1,y1,x2,y2,i,j,k,s=0;
scanf("%d %d",&x1,&y1);
int a[100][100];
for(i=0;i<x1;i++)
for(j=0;j<y1;j++)
scanf("%d",&a[i][j]);
scanf("%d %d",&x2,&y2);
int b[101][101];
for(i=0;i<x2;i++)
for(j=0;j<y2;j++)
scanf("%d",&b[i][j]);
int c[101][101];
for(i=0;i<x1;i++)
for(j=0;j<y2;j++)
{
for(k=0;k<y1;k++)
{
s=s+a[i][k]*b[k][j];
}
c[i][j]=s;
if(j==(y2-1))
printf("%d",c[i][j]);
else
printf("%d ",c[i][j]);
s=0;
if(j==(y2-1)&&i!=(x1-1)) printf("\n");
}

} 