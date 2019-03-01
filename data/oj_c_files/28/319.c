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
	char ch[1000000];
	void f(char *p,int n);
		int m;
	gets(ch);
    m=strlen(ch);
	f(ch,m);
	
}
void f(char *p,int n)
{
	int i,j,k=0;
	j=0;
    for(i=0;i<n;i++)
	{
		
		if(*(p+i)!=' ')
			j++;

		else 
		{
			if(j!=0)
			printf("%d,",j);
			j=0;
		}
			
	}
	for(i=n-1;i>-1;i--)
		if(*(p+i)!=' ')
			k++;
		else
			break;
		if(k!=0)
		printf("%d",k);
	

}