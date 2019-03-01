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
	char a[500][45];
	int n,m=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>*(a+i);
	for(int i=0;i<n-1;i++)
	{
		cout<<*(a+i);
		m+=strlen(*(a+i));
		if(m+1+strlen(*(a+i+1))<=80)
		{
			cout<<" ";
			m++;
		}
		else    
		{
			cout<<endl;
			m=0;
		}
	}
	cout<<*(a+n-1);
	return 0;
}