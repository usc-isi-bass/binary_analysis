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

int main() //???
{ 
	int a[100][100];//????????????????~~
	int n=0;//????????~~ 
	int x=0,y=0;//????~~
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;cin>>y;
		for(int j=0;j<x;j++)
			for(int k=0;k<y;k++)
				cin>>a[j][k];
		int *p;
		int sum=0;
		for(int j=1;j<x-1;j++)
		{
			p=a[j];
			sum=*p+*(p+y-1)+sum;
		}//??????????~???????~~
		p=a[0];
		for(int j=0;j<y;j++)
		{
			sum+=*p;
			p++;
		}
		p=a[x-1];
		for(int j=0;j<y;j++)
		{
			sum+=*p;
			p++;
		}//???????????????~~
		cout<<sum<<endl;
	}
	return 0;
}//?????
