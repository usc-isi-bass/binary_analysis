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

main()
{
	char s[4000];//?400???4000
	gets(s);
	int i,j;
	for(i=0;;i++)
	{
		if(s[i]!=' ')
		{
			for(j=1;;j++)
			{
				if(s[i+j]==' '||s[i+j]=='\0')
				{
					if(i==0)
						printf("%d",j);
					else
						printf(",%d",j);
				    break;
				}
			}
			i=i+j;
		}
		if(s[i]=='\0')
			break;
	}
	printf("\n");
}