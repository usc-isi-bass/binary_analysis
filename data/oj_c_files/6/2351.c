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
	int k,m,n,i,j,p,total;
	int a[110][110]={0};
	cin >>k;
	for (p=1;p<=k;p++)
	{
		cin >>m>>n;
		total=0;
		for (i=1;i<=m;i++)
			for (j=1;j<=n;j++)
			{
				cin >>*(*(a+i)+j);//??
				if ((i==1)||(i==m))
					total=total+*(*(a+i)+j);
				//??????????????
			}
       for (i=2;i<m;i++)
		   total=total+*(*(a+i)+1)+*(*(a+i)+n);//?????????????
	   cout <<total<<endl;//??
	}
	
	return 0;
}