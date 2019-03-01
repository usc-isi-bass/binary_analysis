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
	char a[100];
	gets(a);
	int l=strlen(a);
	int p[100]={0};
	for(int i=0;i<l;i++)
	{
		if((a[i]==a[l-1])&&(p[i]==0))    //?????
		{
			for(int j=i-1;j>=0;j--)
			{
				if((a[j]==a[0])&&(p[j]==0))  //???????????
				{
					p[j]=i;
					p[i]=-1;
					cout<<j<<' '<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}