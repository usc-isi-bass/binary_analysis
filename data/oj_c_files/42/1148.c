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

int in[100000]={0};
int main()
{ int n,k,i,j,count=0;
cin>>n;
for(i=0;i<n;i++) cin>>in[i];
cin>>k;
restart:
for(i=0;i<n;i++)
{
	if(in[i]==k)
	{
		count++;
		for(j=i;j<n-1;j++) in[j]=in[j+1];
		in[n-1]=k-1;

		goto restart;
	}
}

cout<<in[0];
for(i=1;i<n-count;i++) cout<<" "<<in[i];
   cin.get();
   cin.get();
   cin.get();


	return 0;
}
