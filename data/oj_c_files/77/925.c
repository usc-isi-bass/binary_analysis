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

void pair(char [],int,int);
int main()
{
	int len,t;
	char s[100];
	scanf("%s",s);
	len=strlen(s);
	t=0;
	pair(s,len,t);
	return 0;
}
void pair(char s[],int len,int t)
{
	int i,j,count=0;
	i=1;
	if(t==len-2) 
		{
			printf("0 %d\n",len-1);
			return;
		}
	while(s[i]==s[0]||s[i]==' ')
	{
		i++;
	}
	for(j=i-1;s[j]==' ';j--)
		count++;
	printf("%d %d\n",i-count-1,i);
	s[i-count-1]=' ';
	s[i]=' ';
	pair(s,len,t+2);
}