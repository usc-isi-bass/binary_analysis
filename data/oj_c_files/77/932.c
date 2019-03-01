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

void pei(char a[250])
{
	int t=strlen(a);
	int i;
	for(i=0;i<t-1;i++)
	{
		if(a[i]=='}')
		{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='{')
				s--;
			a[s]='0';
			a[i]='0';
			printf("%d %d",s,i);
			printf("\n");
		}
		else
			if(a[i]==')')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='(')
				s--;
			a[s]='0';
			a[i]='0';
			printf("%d %d",s,i);
			printf("\n");
		}
			else
				if(a[i]==']')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='[')
				s--;
			a[s]='0';
			a[i]='0';
			printf("%d %d",s,i);
			printf("\n");
		}
				else
						if(a[i]=='>')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='<')
				s--;
			a[s]='0';
			a[i]='0';
			printf("%d %d",s,i);
			printf("\n");
		}



	}
	i=0;
printf("%d %d",i,t-1);
}
void main()
{
	char a[250];
	gets(a);
	pei(a);
}