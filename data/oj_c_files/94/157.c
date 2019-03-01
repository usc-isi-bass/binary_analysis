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
	int n,i,a[500],b[499],j=0;
	cin>>n;
	for(i=0;i<n;i++)
		{cin>>a[i];
		if(a[i]%2==1) b[j++]=a[i];
		}
	j--;
	for(i=0;i<j-1;i++)
		for(int k=0;k<j-i;k++)
		{
			if(b[k]>b[k+1])
			{
				int temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	for(i=0;i<j;i++)
		cout<<b[i]<<',';
	cout<<b[i];
}