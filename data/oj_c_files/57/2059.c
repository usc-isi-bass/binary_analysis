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
	int n;
	scanf("%d",&n);
	char s[50],S[50];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		for(j=0;s[j]!='\0';j++)
		{
			if ((s[j]=='e'&&s[j+1]=='r'&&s[j+2]=='\0')||
				(s[j]=='l'&&s[j+1]=='y'&&s[j+2]=='\0')||
				(s[j]=='i'&&s[j+1]=='n'&&s[j+2]=='g'&&s[j+3]=='\0'))
			{
				S[j]='\0';
			}
			else
			{
				S[j]=s[j];
			}
		}
		printf("%s\n",S);
	}


	return 0;
}