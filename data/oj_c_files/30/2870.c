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

//?7?????????
int main()
{
	int n,a[100],sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
		if((a[i]%7!=0)&&(a[i]%10!=7)&&(a[i]/10!=7))//????????n????????7????
			sum=sum+a[i]*a[i];
	}
	cout<<sum<<endl;
	return 0;
}