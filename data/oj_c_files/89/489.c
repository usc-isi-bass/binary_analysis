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
	int n,i,j,bmax,max,b[10000]={0},count[10000]={0};
	cin>>n;
	while(1)
	{
		cin>>i>>j;
		if(i==0&&j==0)
			break;
		b[j]++;
		count[i]++;
	}
	bmax=b[0];
	max=0;
	for(int k=1;k<n;k++)
		if(b[k]>bmax)
		{
			bmax=b[k];
			max=k;
		}
	if(count[max]==0)
		cout<<max<<endl;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}