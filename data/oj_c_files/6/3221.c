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
	int a,b;
	int i,j;
	int sum;
	int c[100][100];
	cin>>n;
	while(n>0)
	{
		cin>>a>>b;
		sum=0;
	
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				cin>>c[i][j];
		}	
		int(*p)[100];
		p=c;	
		for(i=0;i<b;i++)
			sum+=*(*p+i);
		for(j=1;j<a-1;j++)
			sum+=*(*(p+j))+*(*(p+j)+b-1);
		for(i=0;i<b;i++)
			sum+=*(*(p+a-1)+i);
		cout<<sum<<endl;
		n--;
	}
	return 0;
}
