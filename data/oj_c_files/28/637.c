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
	int l,i=0,num=0;
	char str[1000];
	gets(str);
	l=strlen(str);
    if(str[0]!=' ')
	{
		while(str[i]!=' '&&i<=l-1)
		{
			i++;
		}
		printf("%d",i);
		while(i<=l-1)
		{
			if(str[i]==' '&&str[i+1]!=' '&&i<=l-2)
			{
				i++;
				while(str[i]!=' '&&i<=l-1)
				{
					num++;
					i++;
				}
				printf(",%d",num);
				num=0;
				i--;
			}
			i++;
		}
		printf("\n");
	}
	else
	{
		while(str[i]==' ')
		{
			i++;
		}
		num=0;
		while(str[i]!=' '&&i<=l-1)
		{
			num++;
			i++;
		}
		printf("%d",num);
		i--;
		num=0;
		while(i<=l-1)
		{
			if(str[i]==' '&&str[i+1]!=' '&&i<=l-2)
			{
				i++;
				while(str[i]!=' '&&i<=l-1)
				{
					num++;
					i++;
				}
				printf(",%d",num);
				num=0;
				i--;
			}
			i++;
		}
		printf("\n");
	}
}
