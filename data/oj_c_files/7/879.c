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
	char *org,*sub,*re;
	int i,j,flag;
	org=(char*)malloc(1024*sizeof(char));
	sub=(char*)malloc(100*sizeof(char));
    re=(char*)malloc(100*sizeof(char));
	gets(org);
	gets(sub);
	gets(re);
	for(i=0;*(org+i)!='\0';i++)
	{
		if(*(org+i)==*sub)
		{
			for(j=0;*(sub+j)!='\0';j++)
			{
				flag=0;
				if(*(org+i+j)!=*(sub+j))
				{flag=1;break;}
			}
			if(flag==0)
			{
				for(j=0;*(re+j)!='\0';j++)
					*(org+i+j)=*(re+j);
				break;
			}
			
		}
	}
	printf("%s",org);
}
