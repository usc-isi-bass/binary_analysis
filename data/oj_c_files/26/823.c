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
	char zfc[101];
	gets(zfc);
		for(int j=0;j<=99;j++)
		{
			while(zfc[j]==zfc[j+1] && zfc[j]==' ')
			{
				for(int i=j;i<=99;i++)
				{
					zfc[i]=zfc[i+1];
				}
			}
		}
		printf("%s",zfc);
		return 0;
}
