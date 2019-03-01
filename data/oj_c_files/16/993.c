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
	int j=0,k,n,a[10],i=0;
	cin>>n;
	k=n;
	while(k>0)
	{
		a[i]=k%10;    //???????
		k=k/10;
		i++;
		j++;          //????
	}
	if(n==0)
	{
		a[0]=0;
		j=1;
	}
	for(i=0;i<j;i++)
		cout<<a[i];   //????????
	cout<<endl;
	return 0;
}