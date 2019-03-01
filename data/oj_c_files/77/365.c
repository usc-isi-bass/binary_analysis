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

char queue[1000]={""},boy,girl;
int number,pairs=0;
void findpair(int girlid)
{
	int i;
	if((number/2-pairs)!=1)
	{
		pairs++;
		i=girlid-1;
		while (i>0)
		{if(queue[i]==girl)
		break;
		i--;
		}
		findpair(i);
	}
	for(i=girlid-1;i>=0;i--)
		if(queue[i]==boy)
		{
			printf("%d %d\n",i,girlid);
			queue[i]=0;
			break;
		}
}
int main()
{
	int i;
	gets(queue);
	number=strlen(queue);
	boy=queue[0];
	for(i=0;i<number;i++)
		if(queue[i]!=boy)
		{
			girl=queue[i];
			break;
		}
		findpair(number-1);
		return 0;
}




