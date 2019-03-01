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
		
	char s[120];
	char word[120];
	char a[120];
	char b[120];

	gets(s);

	gets(a);


	gets(b);
	

	for(i=0;s[i]!=' '&&s[i]!='\0';i++)
	{
		word[i]=s[i];
		
	}
	word[i]='\0';
	if(strcmp(word,a)==0) 
	{
		
	    printf("%s",b);
	}
	else
		printf("%s",word);
	n=i;
while(s[i]!='\0')
{
	i++;

	for(;s[i]!=' '&&s[i]!='\0';i++)
	{
		word[i-n-1]=s[i];
	

	}

	word[i-n-1]='\0';
    if(strcmp(word,a)==0) 
	{
		
	    printf(" %s",b);
	}
	else
		printf(" %s",word);
	
	
n=i;
}

return 0;
}
