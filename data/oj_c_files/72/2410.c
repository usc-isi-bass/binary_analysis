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

int main(int argc, char* argv[])
{
	int len,wid,i,j,a[20][20];
	scanf("%d%d",&len,&wid);
	for(i=0;i<len;i++)
	{for(j=0;j<wid;j++)
	{scanf("%d",&a[i][j]);}
	}
	for(i=0;i<len;i++)
	{for(j=0;j<wid;j++)
		{if(i==0&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
		    printf("%d %d\n",i,j);
		else if(i==0&&j==(wid-1)&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
		    printf("%d %d\n",i,j);
		else if(i==(len-1)&&j==0&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
		    printf("%d %d\n",i,j);
		else if(i==(len-1)&&j==(wid-1)&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
		    printf("%d %d\n",i,j);
		else if(i==0&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
                printf("%d %d\n",i,j);
		else if(i==(len-1)&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
			   printf("%d %d\n",i,j);
		else if(j==0&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
			   printf("%d %d\n",i,j);
		else if(j==(wid-1)&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
			   printf("%d %d\n",i,j);
		else if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
			   printf("%d %d\n",i,j);
		}
	}
	return 0;
}
