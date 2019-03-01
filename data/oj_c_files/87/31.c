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
	int f[6];
	int i,j,m,n;
	for(i=0;;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&f[j]);
		}
		if(f[0]==f[1]&&f[1]==f[2]&&f[2]==f[3]&&f[3]==f[4]&&f[4]==f[5]&&f[5]==0)
		{
			break;
		}
		else
		{
			m=f[0]*3600+f[1]*60+f[2];
			n=(f[3]+12)*3600+f[4]*60+f[5];
			printf("%d\n",n-m);
		}
	}
	return 0;
}