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

int k=0,n,a[26]={0};
const int y=1000000;
void lanjie(int i, int m,int h)
{
    if(i==n+1) 
	{
		if(m>k) k=m;
		return ;
	}
	if(m+n-i<k) return ;
	if(h>=a[i])
	    lanjie(i+1,m+1,a[i]);
	lanjie(i+1,m,h);
	return;
}


int main()
{
    int i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	lanjie(1,0,y);
	cout<<k<<endl;
	
	return 0;
}