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
	int n,a[100];  //??a?????7????
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%7==0 || i%10==7 || (i-70>=0 && i-70<10)) //???7???????a????1????0
			a[i]=1;
		else
			a[i]=0;
	}
	int sum=0; //??????0
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
			sum+=i*i;    //??7????????
	}
	cout<<sum<<endl; //????
	return 0;
}
