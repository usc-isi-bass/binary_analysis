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

char a[1000],b[1000],c[1000];
int main()
{
	cin>>a;
	cin>>b;
	cin>>c;
	int len1,len2,p=0,i,j;
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1-len2+1;i++)
	{
		if(a[i]==b[0])
		{
			p=1;
			for(j=i;j<len2+i;j++)
			{
				if(a[j]!=b[j-i])
				{
					p=0;break;
				}
			}
			if(p==1)
			{
				for(j=i;j<len2+i;j++)
				{
					a[j]=c[j-i];
				}
				break;
			}
		}
	}
	cout<<a<<endl;
	return 0;


	}

				
