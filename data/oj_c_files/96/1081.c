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
  	char s[100];
  	int i,j=0,a=0,b;
  	for(b=0;b<100;b++)
  	{
  		s[b]='\0';
  	}
  	scanf("%s",s);
  	for(i=0;s[i]!='\0';i++)
  	{
    	a=a*10+s[i]-'0';
    	if(j!=0||a/13!=0)
    	{
      		s[j]='0'+a/13;
      		a=a%13;
      		j++;
    	}
  	}
  	s[j]=0;
  	if(j!=0) 
  		printf("%s\n%d",s,a);
  	else 
		printf("0\n%d",a);
}