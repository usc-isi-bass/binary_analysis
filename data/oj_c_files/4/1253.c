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
int r,c,i,j,a[101][101],p;
scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
{
  for(j=1;j<=c;j++)
  {
   scanf("%d",&a[i][j]);
  }
}
for(p=2;p<=r+c;p++)
{
if(p-1<=c)
{
i=1;
j=p-i;
}
else
{
	j=c;
	i=p-j;
}
while (i>=1&&j>=1&&i<=r&&j<=c)
{
	printf("%d\n",a[i][j]);
	i++;
	j--;
}
}
return 0;
}

