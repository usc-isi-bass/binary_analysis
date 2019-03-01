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
	int a[100000];int i,j,n=0,k=0,num=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>num;
	for(i=0;i<n;i++)

		{
              if(a[i]==num)

              { for(j=i;j<n-1;j++)
				 {a[j]=a[j+1];}
			     a[n-k-1]=0;
                  k=k+1;
			      i=i-1;}}

	for(i=0;i<n-k-1;i++)
		{cout<<a[i]<<" ";}
	cout<<a[n-k-1];
	return 0;
}

