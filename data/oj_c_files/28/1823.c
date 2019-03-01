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
	
	int len,k=0,i,n;
	char sen[3001];
	gets(sen);
	len=strlen(sen);
	
	for(i=0;i<len;i++)
	{	
		
		if(sen[i]==' '&&k!=0)
		{	printf("%d,",k);
			k=0;
		
		}
		else if(i==len-1)
		{
			printf("%d",k+1);
			k=0;
		}
		else {if(sen[i]!=' ')k++;}
	}
	
	
	return 0;
}

