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

//??????
int main()
{
	int n,a[10000],i=0,d[10000];
	cin>>n;
	float b[10000],c;
	c=n/10;
	b[0]=floor(c);
	a[0]=n%10;
	if(b[0]==0)
		cout<<n<<endl;
	if(b[0]!=0)
	{
	while(1)
	{
		a[i+1]=(int)b[i]%10;
		b[i+1]=floor(b[i]/10);
		if(b[i+1]<1)
			break;
		i++;
	}
	for(int k=0;k<=i+1;k++)
	{
		cout<<a[k];
	}
	cout<<endl;
	}
	return 0;
}