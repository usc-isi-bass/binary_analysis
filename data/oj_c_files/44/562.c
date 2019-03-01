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

void echo(int n);
int main()
{
    int i,a[10];
	for(i=0;i<6;i++)
	{
        cin>>a[i];
		while(a[i]%10==0)a[i]=a[i]/10;
		if(a[i]>=0)
		echo(a[i]);
		if(a[i]<0)
		{
		cout<<"-";
        echo(-a[i]);
		}
	cout<<endl;
    }

	return 0;
}
void echo(int n)
{
    cout<<n%10;
    n=n/10;
    if(n>0)
    echo(n);

}