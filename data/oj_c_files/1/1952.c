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

int divide(int,int);
int main(void)
{
	int n,a;
	cin>>n;
	while(n!=0)
	{
		cin>>a;
		cout<<divide(a,2)<<endl;
		n--;
	}
    return 0;
}

int divide(int x,int t)
{
	int i,sum=0;
	if(x==1) return 1;                      //????x?1
	for(i=t;i<=x;i++) 
	{
		if(x%i==0) sum+=divide(x/i,i);      //?i?x????x/i???????????????i?
	}
	return sum;
}
