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
	char s[101];
	char *p;
	int i=0,j=0,m=0,n=0,k=0,e;
	p=s;
	scanf("%d",&e);
	for(j=0;j<=e;j++)
	{	gets(s);
		k=strlen(s);
		
		for(i=0;i<k;i++)
		{	n=0;
			p=s;
			if((i==0)&&!(*(p+i)>='A'&&*(p+i)<='Z'||*(p+i)>=97&&*(p+i)<=122||*(p+i)==95))n=1;
		
			if(i!=0&&(*(p+i)<65&&*(p+i)>57||*(p+i)<48||*(p+i)>90&&*(p+i)<97||*(p+i)>122)&&*(p+i)!=95)n=1;

			if(n==1){printf("0\n");break;}
			
			else if(n==0&&i==k-1){printf("1\n");break;}
		}
	}


}
