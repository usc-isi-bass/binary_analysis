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
	char str1[55];
	char str2[55];
	scanf("%s",str1);
	getchar();
	scanf("%s",str2);
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	int i,j,count=0;
	for(i=0;i<l2;i++)
	{
		if(str2[i]==str1[0])
		{
			for(j=1;j<l1;j++)
			{
				if(str1[j]==str2[i+j])
					count++;
			}
			if(count==l1-1)
				printf("%d",i);
		}
	}
	return 0;
}