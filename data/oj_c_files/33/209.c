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
	int i,j,len,n;
	char ch,str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			
			switch(str[j])
			{
			case 'A':
				str[j]='T';
				break;
			case 'T':
				str[j]='A';
				break;
			case 'C':
				str[j]='G';
				break;
			case 'G':
				str[j]='C';
				break;
			}
		}
		printf("%s",str);
                printf("\n");
                
	}
	return 0;
}
