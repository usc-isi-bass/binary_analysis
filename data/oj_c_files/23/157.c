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
	char a[101];
	int i,j,len,begin,end;
	gets(a);
	len=strlen(a);
	end=len-1;
	for(i=end;i>=0;--i)
	{
		if(a[i]==' '&&i!=0)
		{
			begin=i+1;
			break;
		}
		 begin=0;
	}
	for(j=begin;j<=end;++j)
		printf("%c",a[j]);
	while(begin!=0)
	{
		end=begin-2;
		for(i=end;i>=0;--i)
		{
			if(a[i]==' '&&i!=0)
			{
				begin=i+1;
				break;
			}
			begin=0;
		}
		printf(" ");
		for(j=begin;j<=end;++j)
			printf("%c",a[j]);
	}
}


