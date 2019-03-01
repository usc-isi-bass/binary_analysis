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
	char str[256],str2;
	int num=0,len,j,i,examine=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=97;i<=122;i++)
	{
		str2=i;
		for(j=0;j<len;j++)
		{
			if(str[j]==str2)
			{
				num++;
				examine++;
			}
		}
		
		
		if(num==0)continue;
		if(examine!=0)
		{
			printf("%c=%d\n",str2,num);
		}
		num=0;
	}
	if(examine==0)
		{
			printf("No\n");
		}
	return 0;
}
