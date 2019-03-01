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
	int i,j,x,y,count=0;
	int a[16];
	for(i=1;;i++)
	{
		count=0;
		for(j=0;;j++)
		{
			cin>>a[j];
			if((a[j]==0)||(a[j]==-1))
			break;
		}

		for(x=0;x<=j-1;x++)
		{
			for(y=0;y<=j-1;y++)
			{
				if(a[y]==a[x]*2)
				count=count+1;
			}
		}if(a[j]!=-1)
		cout<<count<<endl;
		}
	return 0;
}
