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


int k;
int a[25]={0};
int b[25]={0};

int main()
{
	cin>>k;
	int i,j;
	for(i=0;i<k;i++)
		cin>>a[i];
	int n=0;
	for (j=0;j<k;j++)
	{
		b[j]=1;
		for (i=0;i<j;i++) 
		{
			if (a[i]>=a[j]) 
				if (b[i]+1>b[j]) 
					b[j]=b[i]+1;
		}
	}
	for (i=0;i<k;i++) 
		if (n<=b[i]) 	
			n=b[i];
	cout<<n<<endl;	
	return 0;
}
