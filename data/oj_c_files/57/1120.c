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

main()
{
	int n;
	scanf("%d",&n);
	char w[51];
	char *c[]={"er","ly","ing"};
	for(int i=0;i<n;i++)
	{
		scanf("%s",w);
		for(int j=0;j<3;j++)
		{
			int len=strlen(w);
			int slen=strlen(c[j]);
			if(strcmp(c[j],w+len-slen)==0)
			{
				w[len-slen]=0;
				printf("%s\n",w);
				break;
			}
		}
	}
} 