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
	int t;
	cin>>t;
	while (t--)
	{
		char a[100];
		cin>>a;
		int count[26],sum;
		sum=0;
		int i,j;
		int b[100];
		for (i=0;i<26;i++)
			{count[i]=0;}
		for (i=0;i<100;i++)
			b[i]=0;
		for (i=0;i<strlen(a);i++)
			count[a[i]-'a']++;
		for (i=0;i<26;i++)
			{if (count[i]==1)
				sum++;}
		if (sum==0) cout<<"no"<<endl;
		else
		{
			for (i=0;i<strlen(a);i++)
				for (j=0;j<strlen(a);j++)
				{
					if (a[i]==a[j])
						{b[i]++;}

				}
			for (i=0;i<strlen(a);i++)
				if (b[i]==1)
				{cout<<a[i]<<endl;break;}
		}


	}
}
