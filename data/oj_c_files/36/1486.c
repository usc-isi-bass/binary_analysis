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

// zuoye.cpp : ??????????????

int main()
{
	char a[100];
	char b[100];
	cin>>a;
	cin>>b;
	int len1,len2;
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2) 
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<len1-1;i++)
		for(int j=0;j<len1-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				char t;
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
		for(int i=0;i<len1-1;i++)
			for(int j=0;j<len1-1-i;j++)
			{
				if(b[j]>b[j+1])
				{
					char t;
					t=b[j+1];
					b[j+1]=b[j];
					b[j]=t;
				}
			}
	if(!strcmp(a,b)) cout<<"YES";
	else cout<<"NO";

	return 0;
	
}