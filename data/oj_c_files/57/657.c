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
    int i,n;
	char word[50][32],j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(word[i]);
        strlen(word[i]);
		j=strlen(word[i]);
		if(j>2&&word[i][j-2]=='e'&&word[i][j-1]=='r')
		{
			word[i][j-2]='\0';
		}
		else if(j>2&&word[i][j-2]=='l'&&word[i][j-1]=='y')
		{
			word[i][j-2]='\0';
		}
		else if(j>3&&word[i][j-3]=='i'&&word[i][j-2]=='n'&&word[i][j-1]=='g')
		{
			word[i][j-3]='\0';
		}     
	}
	for(i=0;i<=n;i++)
	{
	    printf("%s\n",word[i]);
	}
	return 0;
}
