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
	char w[1000]={32},s[300][50]={'0'};
	int i=0,j=0,k;
	gets(w);
	while(w[i]!='\0')
	{
		k=0;
		while(w[i]!=32&&w[i]!='\0')
		{
			s[j][k]=w[i];
			i++;
			k++;
		}
		s[j][k]='\0';
		j++;
		while(w[i]==32)
		{
			i++;
		}
	}
	for(i=0;i<j;i++)
	{
		if(i==0) printf("%d",(int)strlen(s[i]));
		else printf(",%d",(int)strlen(s[i]));
	}
        return 0;
}

