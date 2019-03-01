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
	char s[N],w[N],h[N];
	int len_1,len_2,len_3,i,j,k=0;
	scanf("%s",s);
	scanf("%s",w);
	scanf("%s",h);
	len_1=strlen(s);
	len_2=strlen(w);
	len_3=strlen(h);
	for(j=0;j<len_1;j++)
	{
		if(s[j]==w[0])
		{
			for(i=1;i<len_2;i++)
				if(s[j+i]!=w[i])
					break;
				if(i==len_2)
				{
					k=1;
					break;
				}
		}
	}
				if(k)
				{
					for(k=0;k<j;k++)
						printf("%c",s[k]);
					for(k=0;k<len_3;k++)
						printf("%c",h[k]);
					for(k=j+len_3;k<len_1;k++)
						printf("%c",s[k]);
					printf("\n");
				}
				else
				{
					printf("%s",s);}
				return 0;
}
