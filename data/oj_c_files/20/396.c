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
	char str[14],substr[4];
	while (scanf("%s %s",str,substr)!=EOF)
	{  
	         int i,n,max=0,num;
		n=strlen(str);
                  char *p=str;
		for(i=0;i<n;i++)
		{
			if(*(p+i)>max) 
			{
				max=*(p+i);
				num=i;
			}
		}
		for(i=n+2;i>num+3;i--)
		{
			*(p+i)=str[i-3];
		}
                  *(p+n+3)='\0';
		for(i=num+3;i>num;i--)
		{
			*(p+i)=substr[i-num-1];
		}	
		for(i=0;i<n+3;i++)
			printf("%c",*(p+i));	
		printf("\n");
	}
}


