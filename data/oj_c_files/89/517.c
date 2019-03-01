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
	int a[10000]={0},b[10000]={0},n,i,j,k,q;//a??????????????
	cin>>n;
	q=0;
	while(n!=0)
	{
		cin>>i>>j;
		if(i==0&&j==0)
		{
			break;
		}
		a[i]++;
		b[j]++;
	}
	for(k=0;k<=n-1;k++)
	{
		if(b[k]==n-1&&a[k]==0)
		{
			cout<<k;
			q=1;
		}
	}
	if(q==0)
	{
		cout<<"NOT FOUND";
	}
		return 0;
}



	
	



    

	