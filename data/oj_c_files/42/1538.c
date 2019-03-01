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
	int n;
	int i;
	int j;
	int d;
	int k;
	int max = 0;
    int f[100001];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>f[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(f[i] == k)
		{
			for(j = i+1; j< n ; j ++)
			{
				f[j-1] = f[j];
			}
			i--;
			n--;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<f[i];
		}
		else
		{
			cout<<" "<<f[i];
		}
	}
    
return 0;
}
