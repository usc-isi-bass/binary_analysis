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

int jie(int a,int b)
{
	if((a==1)||(b==1))  //??????1????1
		return 1;
	b=b/2;      //????????????2???????
	if(a>b)
		return jie(b,a);
	else if(a<b)
		   return jie(a,b);  //????????????
	     else if(a==b)
			 return a;      //???????????
}
int main()
{
	int m,n,c;
	cin>>m>>n;
	if(m>n)
		c=jie(n,m);
	else if(m<n)
		   c=jie(m,n);
	    else if(m==n)
			c=m;
	cout<<c<<endl;
return 0;
}