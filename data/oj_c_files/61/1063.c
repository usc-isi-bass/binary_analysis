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
	int a=1,b=1,n,k,m,i;
	cin>>n;
	for(k=1;k<=n;k=k+1)
	{
		cin>>m;
		a=1,b=1;//?????????????a ?b??
		for(i=1;i<=(m-1)/2;i=i+1)
		{
		   a=a+b;
		   b=a+b;
		}
		if(m%2==1)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<b<<endl;
		}
           }
return 0;
}