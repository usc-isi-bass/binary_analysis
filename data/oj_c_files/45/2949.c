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
	char str1[100],str2[100];
	int n,m,i,j,index=1;
	scanf("%s",str1);
	scanf("%s",str2);
	for(i=0;i<strlen(str2);i++)
	{
		if(str1[0]==str2[i])
		{
			for(j=1;j<strlen(str1);j++)
			{
				if(str1[j]==str2[j+i])
					index++;
			}
			if(index=strlen(str1))
			{
				printf("%d",i);
				return 0;
			}
		}
	}
}