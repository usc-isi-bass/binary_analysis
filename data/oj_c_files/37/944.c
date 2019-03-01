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
	int t,rd,check=0,output=0;
	char str[100001],*p,*pm;
	scanf("%d",&t);
	for(rd=0;rd<t;rd++)
	{
		output=0;
		scanf("%s",str);
		p=str;
		for(;p<(str+strlen(str));p++)
		{
			pm=str;
			for(;pm<(str+strlen(str));pm++)
			{
				if(*p==*pm)
				{
					check++;
				}
				if(check==2)
				{
					check=0;
					break;
				}
			}
			if(pm==str+strlen(str))
			{
				printf("%c\n",*p);
				check=0;
				output++;
				break;
			}
		}
		if(output==0)
		{
			printf("no\n");
		}
	}
	return 0;
}
