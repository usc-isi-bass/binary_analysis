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

void find(int a[52],char str[100])
{
	int i=0,k=0;
	for(i=0;i<52;i++)
		a[i]=0;
	for(k=0;str[k]!='\0';k++)
	{
		for(i=0;i<26;i++)
		{
		    if(str[k]=='a'+i)
			a[i]++;
		}
	}
	for(k=0;str[k]!='\0';k++)
	{
		for(i=0;i<26;i++)
		{
			if(str[k]=='A'+i)
				a[i+26]++;
		}
	}
}
void main()
{
	char str1[100],str2[100];
	int a[52],b[52],i,n=0;
	int *p1,*p2;
	p1=a;
	p2=b;
	scanf("%s %s",str1,str2);
	find(a,str1);
	find(b,str2);

	for(i=0;i<52;i++)
	{
		if(*(p1+i)==*(p2+i))
			n++;
	}
	if(n==52)
		printf("YES") ;
	else
		printf("NO");
}
		
			
			
		
		

		   
	

	
	
		