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
	int a[5]={0},n,i,j;
	cin>>n;
    a[0]=n/10000;
	a[1]=(n-a[0]*10000)/1000;
	a[2]=(n-10000*a[0]-1000*a[1])/100;
	a[3]=(n-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=n-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10;
	if(n==0)
		cout<<0;
	else
    for(i=0;i<5;i++)
	{
		if(a[i]!=0)
		{
			for(j=4;j>=i;j--)
				cout<<a[j];
			break;
		}
	}
	cout<<endl;
	return 0;
}