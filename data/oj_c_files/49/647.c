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
	char a[500]={0};
	cin>>a;
	int len=0;
	for (int i=0;a[i]!=0;i++)
		len++;     //???????
	int res=0;
	for (int k=1;k<len;k++)
		for (int i=0;i<len-k;i++)
		{
			for (int p=0;p<k;p++)
			{
				if (a[i+k]==0)
				{
					res++;
					break;
				}
				if (a[i+p]!=a[i+k-p])
				{
					res++;
					break;      //?i~i+k??????P????P????????++???
				}
			}
			if (res==0)   //?????0??????
			{
				for (int j=i;j<=i+k;j++)
					cout<<a[j];
				cout<<endl;
			}
			res=0;
		}

	
	return 0;
}