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
	int d,ma1,ma2;
	char c;
	scanf("%d",&d);
	ma1=d;
	ma2=d;
	c=getchar();
	while(c!='\n')
	{
		scanf("%d",&d);
		if (d>ma1)
		{
		ma2=ma1;
		ma1=d;
		}
		else if ((d<ma1)&&(d>ma2))
			ma2=d;
		else if((d<ma2)&&(ma1==ma2))
			ma2=d;

		c=getchar();
	}
       
	if (ma1==ma2)  printf("No");
	else printf("%d",ma2);
	return 0;
}