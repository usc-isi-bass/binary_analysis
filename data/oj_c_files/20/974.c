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
	char str[11],substr[4],x[15];
	int max,num,i,j;
	while(1)
	{
		max=0;
		
		if(scanf("%s%s",str,substr)==EOF)
		{
			break;
		}
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				num=i;
			}
		}
		strncpy(x,str,num+1);
		for(j=num+1;j<=num+strlen(substr);j++)
		{
			x[j]=substr[j-num-1];
		}
		
		for(j=num+strlen(substr)+1;j<strlen(substr)+strlen(str);j++)
		{
			x[j]=str[j-strlen(substr)];
		}
		x[j]='\0';
		printf("%s\n",x);
	}
	return 0;
}
