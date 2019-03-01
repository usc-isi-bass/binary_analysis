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

void main()
{
	int n,k,len = 0;
	char str1[30],str2[30];
	gets(str1);
	gets(str2);
	len = strlen(str1); 
	k=0;
	while (k>=0)
	{
		n=str1[k]-str2[k];
		k++;

		if (n==-32)
			continue;
		if (n==32)
			continue;
		if (n>32)
		{
			printf(">");
			break;
		}
		if (n<-32)
		{
			printf("<");
			break;
		}
                  if (n<0)
                  {
                            printf(">");
			break;
                   }
                   if (n>0)
                  {
                            printf("<");
			break;
                   }


		if (k==len)
		{
			printf("=");
			break;
		}
			}
}

