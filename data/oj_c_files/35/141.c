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

int t[10][10],a,b;
int andian(int x,int y)
{ int i,j=0;
	for(i=0;i<=b-1;i++)
	if(t[x][y]<t[x][i])
		j++;
	for(i=0;i<=a-1;i++)
	if(t[x][y]>t[i][y])
		j++;
	if(j==0)
	{printf("%d+%d",x,y);
	return 1;
	}
	else return 0;
}
void main()
{ int c,d=0,r,i,j;
	scanf("%d,%d",&a,&b);
	for(i=0;i<=a-1;i++)
	{for(j=0;j<=b-1;j++)
	scanf("%d",&t[i][j]);
	}
	for(i=0;i<=a-1;i++)
	{for(j=0;j<=b-1;j++)
	{d=andian(i,j)+d;
	}
	}
	if(d==0)
		printf("No");

}