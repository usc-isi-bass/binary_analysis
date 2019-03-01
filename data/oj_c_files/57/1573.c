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
	int n,len;
	char letter[200];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",letter);
		len=strlen(letter);
		if(letter[len-2]=='e'&&letter[len-1]=='r')
		{
			letter[len-2]='\0';
			letter[len-1]='\0';
		}
		if(letter[len-2]=='l'&&letter[len-1]=='y')
			{
			letter[len-2]='\0';
			letter[len-1]='\0';
			}
			if( letter[len-3]=='i'&&letter[len-2]=='n'&&letter[len-1]=='g')

			{
				letter[len-3]='\0';
				letter[len-2]='\0';
				letter[len-1]='\0';
			}
			
				printf("%s\n",letter);
			
			for(int t=0;t<len;t++)
				letter[t]=' ';
	
	}
	return 0;
}