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
{	int i,n,k=0,a,j;
	char s[100],b[100];
	scanf("%s",s);
	n=strlen(s);
	if(n==1)
	{
		printf("0\n");
		k=s[0]-'0';
		printf("%d",k);
	}
	else
		if(n==2&&s[0]=='1'&&(s[1]-'0')<3)
		{
			printf("0\n");
		k=10+s[1]-'0';
		printf("%d",k);
		}
		
		else{for(i=0;i<n;i++)
			{k=s[i]-'0'+k*10;
		a=k/13;
		b[i]=a+'0';
		k=k%13;}
	b[i]='\0';
	
		for(j=0;j<i;j++)
		{if(b[j]!='0')
		{	printf("%c",b[j]);
			break;
		}
		}
		for(j++;j<i;j++)
		printf("%c",b[j]);
		printf("\n");
		printf("%d\n",k);
		}
	


	return 0;
}