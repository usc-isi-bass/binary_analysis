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
	char s[1000],temp[1000];
	int b[1000];
	int i,n=0,m=0,len,j;
	memset(temp,2,sizeof(temp));
	while(1)
	{m=0;n=0;
	  scanf("%s",s);
	  if(strcmp(temp,s)==0)
		  break;
	  else strcpy(temp,s);
 	memset(b,0,sizeof(b));
	len=strlen(s);
	for(i=0;i<len;i++)
	{  
		if(s[i]=='(') 
	    n++;
		else if(s[i]==')'&&n>0)
		{
			n--;
			b[i]=1;
		}
	}
	for(j=len-1;j>=0;j--)
	{
		if(s[j]==')') m++;
		else if(s[j]=='('&&m>0) 
		{
			m--;
			b[j]=1;
		}
	}
	printf("%s\n",s);
	for(i=0;i<len;i++)
	{
		if(b[i]==0&&s[i]==')')
			printf("?");
		else if(b[i]==0&&s[i]=='(')
			printf("$");
		else printf(" ");
	}
	printf("\n");
	}
	return 0;
}
