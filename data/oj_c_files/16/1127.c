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
    int a,r,i;
    scanf("%d",&a);
    r=0;
	i=0;
    while(a>0)
    {
        r=r*10+a%10;
		i=i+!(a%10);
        a=a/10;
    }
	switch(i)
	{
	case 0:
		printf("%d\n",r);break;
	case 1:
		printf("0%d\n",r);break;
	case 2:
		printf("00%d\n",r);break;
	case 3:
		printf("000%d\n",r);break;
	case 4:
		printf("0000%d\n",r);break;
	}
    return 0;
}

