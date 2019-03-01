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

int t;
void tot(int,int);
int main()
{

	int n,a[100],i;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++) {
		t = 0;
		tot(a[i],2);
		cout<<t<<endl;
	}
	return 0;
}

void tot(int x, int min)
{	int k;
	if(x==1) {
		++t;
		return;
	}
	for(k=min;k<=x;k++)
		if(x%k==0)
		{
			tot(x/k, k);
		}
}