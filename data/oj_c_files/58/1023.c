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
	char *p;
	char string[100];
	p=string;
	int n;
	int i,legal=1;
	int count=0;
	scanf("%d\n",&n);
	while(count<n)
	{
		gets(p);
		i=0;
		if(!( (*p>=65 && *p<=90) || (*p>=97 && *p<=122) || (*p==95) ))
		{
			legal=0;
			printf("0\n");
		}else{
			while(*(p+i)!='\0')
			{
				if(!( (*(p+i)>=65 && *(p+i)<=90) || (*(p+i)>=97 && *(p+i)<=122) || (*(p+i)==95) || (*(p+i)>=48 && *(p+i)<=57) ))
				{
					legal=0;
					printf("0\n");
					break;
				}else{
					i++;
				}
			}
			if(legal==1)
				printf("1\n");
		}
		legal=1;
		count++;
		p=string;
	}
	return 0;
}