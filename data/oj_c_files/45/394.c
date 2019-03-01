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

int main(int argc, char* argv[])
{
	char str[50],str1[50],str2[50][50];
	int len1,len2;
	int i,k,n;
	scanf("%s%s",str,str1);
	len1=strlen(str);
	len2=strlen(str1);
	n=len2-len1+1;
	for(i=0;i<n;i++)
	{
		static int j=0;
		//printf("%d\n",j);
		for(k=0;j<len2,k<len1;j++,k++)
		{
			str2[i][k]=*(str1+j);
			if(k==len1-1)
			{
				str2[i][k+1]='\0';
				j=j-len1+2;
				break;
			}
		}
	}
    /*for(i=0;i<n;i++)
	{
		puts(str2[i]);
	}*/
	for(i=0;i<n;i++)
	{
		if(strcmp(str,str2[i])==0)
			break;
	}
	printf("%d",i);

	return 0;
}