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
	int n;
	cin>>n;
	int k;
	int a[61];
	while(n--)
	{
		cin>>k;
		if(k==0)  {cout<<"60\n";continue;}
		for(int i=1;i<=k;i++)
			cin>>a[i];
		int num=0;
		for(int i=k;i>=1;i--)
		{
			if( a[i]+i*3-3>60 ) continue;
			if(a[i]+i*3>=60) {num=a[i];break;}
			else {num=60-i*3;break;}
		}
		cout<<num<<endl;
	}
  return 0;
}
