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
	char s[300][100];
	char max[100],min[100];
	int ma=0,mi=100,i,j,a;

	for(i=0;;i++)
	{
		memset(s[i],0,sizeof(s[i]));
		for(j=0;;j++)
		{
			scanf("%c",&s[i][j]);//printf("%s\n",s[i]);
			if(s[i][j]==' '||s[i][j]=='\n')
			{
				if(s[i][j-1]==',')
				{
					a=strlen(s[i])-1;
					if(a>ma) {ma=a;memset(max,0,sizeof(max));strncpy(max,s[i],a);}
					if(a<mi) {mi=a;memset(min,0,sizeof(min));strncpy(min,s[i],a);}
					break;
				}
				//printf("m\n");
				else
				{
					a=strlen(s[i]);
					if(a>ma) {ma=a;memset(max,0,sizeof(max));strncpy(max,s[i],a-1);}
					if(a<mi) {mi=a;memset(min,0,sizeof(min));strncpy(min,s[i],a-1);}
					break;
				}
			}
		}
		if(s[i][j]=='\n') break;
	}
	printf("%s\n%s",max,min);
}