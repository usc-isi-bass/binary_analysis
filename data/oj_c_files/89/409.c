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
	int n,p1[10000],p2[10000],k,i,j;
	cin>>n;
	for(k=0;k<n;k++)
		p1[k]=p2[k]=0;
	while(cin>>i>>j)
	{
		if(i==0&&j==0) break;
		p1[i]++;
		p2[j]++;
	}
	for(k=0;k<n;k++)
		if(p2[k]==n-1&&p1[k]==0)
		{
			cout<<k;
			break;
		}
	if(k==n)
	cout<<"NOT FOUND";
	return 0;

}