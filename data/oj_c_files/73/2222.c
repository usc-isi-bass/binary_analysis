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
int i,j,k,a[N][M],max,maxj,flag;
for(i=0;i<N;i++)
for(j=0;j<M;j++)
scanf("%d",&a[i][j]); 
for(i=0;i<N;i++)
{ max=a[i][0]; 
maxj=0; 
for(j=0;j<M;j++)
if(a[i][j]>max)
{ max=a[i][j];
maxj=j;
}

flag=1;

for(k=0;k<N;k++)
if(max>a[k][maxj])
{ flag=0;
continue;}

if (flag)
{ printf("%d %d %d\n",i+1,maxj+1,max);
break;
}
}
if(!flag)
printf("not found\n");
}