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
	char a[1000];
	int i,n=0; 
	scanf("%s",a);                               //??????????????????? 
	for(i=0;i<1000;i++)
	{
		if(a[i]!=0)
			n++;
		else
			break;
	}
	
	int b[1000]={0},j,k=0,m;
	for(j=0;j<n;j++)                       //???j<n?????a[n]?a[n-1]????     
	{
		if(a[j+1]==a[j] || a[j+1]==a[j]-'a'+'A' || a[j]==a[j+1]-'a'+'A')
			b[k]++;
		else
		{
			b[k]=b[k]+1;
			if(a[k]>='a'&&a[k]<='z')
				m=a[k]-'a'+'A';
			else
				m=a[k];
			printf("(%c,%d)",m,b[k]);
			k=j+1;
		}
	}
	return 0;
}