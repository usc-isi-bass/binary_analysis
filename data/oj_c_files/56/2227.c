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
	int a,i,j,n;
	int b[5],tem[6];
	scanf("%d",&a);
	tem[0]=a;
	for(i=0;i<5;i++)
	{
		b[i]=tem[i]%10;
		tem[i+1]=(tem[i]-b[i])/10;
		if(tem[i+1]==0)
		{
			n=i;
			break;
		}
	}
	for(j=0;j<=n;j++)
		printf("%d",b[j]);
	return 0;

}