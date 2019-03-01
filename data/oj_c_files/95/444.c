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
	char s[80],S[80];
	int i,j,k,b=0;
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]>=65&&s[i]<=90)
                      {s[i]=s[i]+32;}
                  
	}
	gets(S);
	for (j=0;S[j]!='\0';j++)
	{
		if (S[j]>=65&&S[j]<=90)
                      {S[j]=S[j]+32;}
                 
	}
	
	for (k=0;S[k]!='\0'&&s[k]!='\0';k++)
	{
		if (s[k]!=S[k])
		{b=1;}
		 if (s[k]>S[k])
		{printf (">");break;}
		  if (s[k]<S[k])
		{printf ("<");break;}
		
	}
	if (b==0)
	{printf("=");}
	  return 0;
}

