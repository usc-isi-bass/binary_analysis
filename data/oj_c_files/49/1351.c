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
	char str[505];
	cin >> str;
	int len=strlen(str);
	int l,s;
	for(l=2;l<=len;l++)
	{
		for(s=0;s<=len-l;s++)
		{
			int flag=1;
			for(int p=s,q=s+l-1;p<q;p++,q--)
			{
				if(str[p]!=str[q])
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				for(int k=s;k<=s+l-1;k++)
					cout<<str[k];
					cout<<endl;
			}
		}
	}
	return 0;
}