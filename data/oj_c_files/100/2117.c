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
	char str[300],*ps;
	int S[26]={0},s[26]={0},i,k=0;
	scanf("%s",str);
	for(ps=str;*ps!='\0';ps++)
	{
		if(*ps>='a'&&*ps<='z')
		{
			s[*ps-'a']++;
			k=1;
		}
		if(*ps>='A'&&*ps<='Z')
		{
			S[*ps-'A']++;
			k=1;
		}
	}
	if(k==1){
	for(i=0;i<26;i++)
	{
		if(S[i]!=0)
		{
			printf("%c=%d\n",'A'+i,S[i]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(s[i]!=0)
		{
			printf("%c=%d\n",'a'+i,s[i]);
		}
	}
	}
	else
	{
		printf("No");
	}
	
    
}