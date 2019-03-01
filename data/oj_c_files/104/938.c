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

int f(int a,int b)
{
	
	if(a==b)
		return a;
	else if(a>b)
		 return f(a/2,b);
	else if(a<b)
		 return f(a,b/2);

}



int main()
{
	int x,y;
	cin>>x>>y;
	f(x,y);
	
	cout<<f(x,y)<<endl;


	return 0;
}


    

