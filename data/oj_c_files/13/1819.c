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

int main(){
	int n,a[20000],i,j;
	cin>>n;
	int count=n;
	for(i=0;i<count;i++)
	{
		cin>>a[i];
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i--;
				count--;
				break;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];
	}
	return 0;
}