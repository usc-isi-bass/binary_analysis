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
	int a[7],br;
	long unsigned s;
	int i=0;

	for(;;)
	{
		br=0;
		for(i=1;i<=6;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0)
				br++;
		}
		if(br==6)
			break;
		s=((a[4]+12)*3600+a[5]*60+a[6])-(a[1]*3600+a[2]*60+a[3]);
		printf("%ld\n",s);
	}
	return 0;
}