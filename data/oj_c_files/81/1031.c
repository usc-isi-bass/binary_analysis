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
	int a[5][5],m,n,i,j,t;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	if(m<0||m>4||n<0||n>4)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		for(i=0;i<5;i++)
		  for(j=0;j<5;j++)
		  {
			  printf("%d",a[i][j]);
			  if(j>=0&&j<4)printf(" ");
			  else printf("\n");
		  }
	}
	return 0;
}