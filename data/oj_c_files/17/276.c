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
	char str[100][1000], s[1000];
	int i, j, n, a[1000], temp;
	for(i=0; i<100; i++)
	{
		str[i][0]='\0';
	}
	i=0;
	do
	{
		gets(str[i]);
		if(str[i][0]=='\0')
			break;
		i++;
	}while(1);
	n=i-1;//???????n????????
	for(i=0; i<=n; i++)
	{
		for(j=0; j<1000; j++)
			s[j]='\0'; 
		temp=0;
		printf("%s\n",str[i]);
		for(j=0; j< (strlen(str[i])); j++)
		{
			if(str[i][j]=='(')
			{
				s[j]='$';
				temp++;
				a[temp]=j; 
			}
			else if(str[i][j]==')')
			{
				if(temp==0)
					s[j]='?';
				else
				{
					s[a[temp]]=' ';
					temp--;
					s[j]=' ';
				}
			}
			else
				s[j]=' ';
		}
		printf("%s\n",s);
	}
}