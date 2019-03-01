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

void minus(char a[],char b[],char result[]);
void main()
{
	int n,i;
	char a[max][max],b[max][max];
    char result[max][max];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s\n%s\n\n",a[i],b[i]);
		minus(a[i],b[i],result[i]);       
        printf("%s\n",result[i]);
	}
}

void minus(char a[],char b[],char result[])
{ 
	int la,lb,lresult;
    int flag=0;
    int t=0;
    int s,c=0;
    int i;
    char temp1;
    la=strlen(a)-1;
    lb=strlen(b)-1;
    while(la >= 0)
	{
        if(lb < 0)
		{
			s=a[la--]-48;
		}
        else 
		{
			s=a[la--]-b[lb--];
		}
        result[t++]=s-c+48;
        if(result[t-1] < 48) 
		{
			result[t-1]+=10;
			c=1;
		}
        else c=0;
	}
	while(result[t] == 0) t--;
    while(result[t] == '0')
	{
		result[t]=0;t--;
	} 
	lresult=t;
	for(i=0;i <= lresult/2;i++)
	{
        temp1=result[i];
        result[i]=result[lresult-i];
        result[lresult-i]=temp1;
    }
}