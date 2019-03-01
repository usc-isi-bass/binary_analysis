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

void bad(int w)
{int i,j,W;
W=w;
for(i=1;i<13;i++)
{switch(i)
{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		{for(j=1;j<32;j++)
		{if(W==5&&j==13)
				printf("%d\n",i);
		if(W>6)
				W=1;
		else
				W++;}
		break;
		}
	case 4:
	case 6:
	case 9:
	case 11:
		{for(j=1;j<31;j++)
		{if(W==5&&j==13)
				printf("%d\n",i);
		if(W>6)
				W=1;
		else
				W++;}
		break;
		}
	case 2:
		{for(j=1;j<29;j++)
		{if(W==5&&j==13)
				printf("%d\n",i);
		if(W>6)
				W=1;
		else
				W++;}
		break;
		}
}}}


void main()
{
	int w;
	scanf("%d",&w);
	bad(w);
}
	