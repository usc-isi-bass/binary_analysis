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
	char *p,str[81];
	int rd,n;
	scanf("%d",&n);
	getchar();
	for(rd=0;rd<n;rd++)
	{
		gets(str);
		p=str;
		for(;p<&str[strlen(str)];p++)
		{
			if(!(Check)&&p==str)
			{
				printf("0\n");
				break;
			}else{
				if(!(Check||(*p>='0'&&*p<='9')))
				{
					printf("0\n");
					break;
				}else if(p==&str[strlen(str)-1]){
					printf("1\n");
				}
			}
		}
	}
	return 0;
}