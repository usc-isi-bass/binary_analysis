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
	char a[101];
	while(gets(a))
	{
		printf("%s\n",a);
		int l=strlen(a);
		int i,j;
		int flag=1;
		while(flag==1)
		{	
		flag=0;
		for(i=0;i<l;i++)
		{
			if(a[i]=='(')
			{
				for(j=i+1;j<l;j++)
				{
					if(a[j]==')') {a[i]='a';a[j]='a';flag=1;break;}
					if(a[j]=='(') {i=j;}
				}
				if(flag==1) break;
			}
		}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]=='(') printf("$");
			else if(a[i]==')') printf("?");
			else printf(" ");
		}
		printf("\n");
	}
}