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

char a[1000];
void judge(int left,int right)
{
	for (int i=left;i<=right;i++)
	{
		if (a[i]!=a[right+left-i])
			return ;
	}
	for (int i=left;i<=right;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	return;
}



int main()
{
	cin.getline(a,1000);
	int len=strlen(a);
	for (int j=1;j<=len-1;j++)
	{
		for (int i=0;i<len-1;i++)
		{
		
				if (i+j<=len-1)
				{judge(i,i+j);
				}
		}
	}
return 0;}
