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


int main(int argc, char* argv[])
{
	int n,i,p,j,k,s,l;
	char a[110],b[110]={' '};
	scanf("%d",&n);
	for (k=1;k<=n;k++)
	{	
		s=0;
		scanf("%s",&a);
		l=strlen(a);
		for (i=0;i<=l-1;i++)
		{
			if (a[i]=='(')
			{
				s+=1;
				b[i]=' ';
				continue;
			}
			else if (a[i]==')')
			{
				if (s>0)
				{
					s-=1;
					b[i]=' ';
					continue;
					
				}
				else if (s==0)
					b[i]='?';
				continue;
			}
			else
				b[i]=' ';
			continue;
			
			
		}
		s=0;
		for (i=l-1;i>=0;i--)
		{
			if (a[i]==')')
			{
				s+=1;
				continue;
			}
			else if (a[i]=='(')
			{
				if (s>0)
				{
					s-=1;
					continue;
					
				}
				else if (s==0)
					b[i]='$';
				continue;
			}
		}
		
		for (j=0;j<=l-1;j++)	
		{
			printf("%c",a[j]);
		}
		
		printf("\n");		
		for (j=0;j<=l-1;j++)	
		{
			printf("%c",b[j]);
		}
		printf("\n");	
		
	}


return 0;
}
