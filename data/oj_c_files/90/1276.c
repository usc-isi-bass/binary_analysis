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

int f(int m,int n) 
{
    if(m==0||m==1) return 1;
	if(n==1) return 1;
	if(m<n) n=m;
	return f(m,n-1)+f(m-n,n); 

}

int main()
{
	int i=0,t,m,n;
	cin>>t;
	while(i<t)
	{
	   cin>>m>>n;
	   cout<<f(m,n)<<endl;
	  i++;
	}
	
	return 0;
}