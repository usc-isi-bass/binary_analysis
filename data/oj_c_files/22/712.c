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

void main()
{
	int i,max,mac=-1;
	scanf("%d",&max);
	while(getchar()!='\n')
	{
		scanf("%d",&i);
		if(i>max)
		{
			mac=max;
			max=i;
		}
		else if(i<max&&i>mac)
			mac=i;
	}
		if(mac!=-1&&mac!=max)
			printf("%d",mac);
		else
			printf("No");
}