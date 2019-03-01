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
  int a[10][10],m,n,i,j,max,p,is;
  scanf("%d,%d",&m,&n);
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
  {
	max=a[i][0];
	p=0;
	for(j=1;j<n;j++)
	if(max<a[i][j])
	{max=a[i][j];p=j;}
	is=1;
	for(j=0;j<m;j++)
		if(a[j][p]<a[i][p])
	{is=0;break;}
	if(is){printf("%d+%d\n",i,p);return 0;}
  }
  printf("No\n");
  return 0;
}
