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
	int n,k,x;
	cin>>n;
	int shu[n];
	for(int i=0;i<n;i++)
	{
		cin>>x;
		shu[i]=x;
	}//???????&??
	cin>>k;

	for(int m=0,b=0;m<n;m++)
	{
		if(b==0)
		{
			if(shu[m]!=k){cout<<shu[m];b=1;}//diyigeshuziqianmianmeiyoukongge
		}
		else
		{
			if(shu[m]!=k){cout<<" "<<shu[m];}
		}

	}




	return 0;

}
