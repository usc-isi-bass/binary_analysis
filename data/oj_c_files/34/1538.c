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
	int n,m,p;
		cin>>n;
		
	if(n==1)
		cout<<"End";
	if(n!=1)
	{	while(1)
		{
		if(n%2==1)
		{
			m=n*3+1;
		cout<<n<<"*3"<<"+1"<<"="<<m<<endl;
		n=m;
		}
		else
		{	p=n/2;
		cout<<n<<"/2"<<"="<<p<<endl;
		n=p;}
		if(n==1)break;
		}
	cout<<"End";}

return 0;
}
