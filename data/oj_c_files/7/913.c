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
	char s3[100];
	char s1[100];
	char s2[100];
	int L1,L2,i,j;
	gets(s1);
	gets(s2);
	gets(s3);
	L1=strlen(s1);
	L2=strlen(s2);
	for(i=0;i<L1;i++)
	{
		if(s1[i]==s2[0]&&s1[i+L2-1]==s2[L2-1])
		{
			for(j=i;j<i+L2;j++)
			{
				s1[j]=s3[j-i];
			}
                             break;
		}
	}
	puts(s1);
	return 0;
}


