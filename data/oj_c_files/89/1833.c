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
	int i,j,m,n,k; cin>>k;
	int a[k],b[k];
	for (m=0;m<k;m++)
	{a[m]=0; b[m]=0;}
	while (true)
	{
		cin>>i>>j;
		if (i==0&&j==0) break;
		else {a[i]+=1; b[j]+=1;}
	}
	for (n=0;n<k;n++)
		if (a[n]==0&&b[n]==k-1)
			{cout<<n<<endl;break;}
	if (n==k) cout<<"NOT FOUND"<<endl;
	return 0;
}
