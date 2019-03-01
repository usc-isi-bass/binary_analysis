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

int f(int x,int y)
{int z;
if(x>=0&&x<=4&&y>=0&&y<=4)
z=1;
else
z=0;
return z;
}
int main()
{int n,m,i,j,a[5][5],(*p)[5];
p=a;
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
scanf("%d",*(p+i)+j);
}
scanf("%d%d",&n,&m);
if(f(m,n)==0)
printf("error");
else
{for(i=0;i<n;i++)
{printf("%d",p[i][0]);
	for(j=1;j<5;j++)
printf(" %d",p[i][j]);
printf("\n");
}
printf("%d",p[m][0]);
for(j=1;j<5;j++)
printf(" %d",p[m][j]);
printf("\n");
for(i=n+1;i<m;i++)
{printf("%d",p[i][0]);
	for(j=1;j<5;j++)
printf(" %d",p[i][j]);
printf("\n");
}
printf("%d",p[n][0]);
for(j=1;j<5;j++)
printf(" %d",p[n][j]);
printf("\n");
for(i=m+1;i<5;i++)
{printf("%d",p[i][0]);
	for(j=1;j<5;j++)
printf(" %d",p[i][j]);
printf("\n");}
}
return 0;
}
