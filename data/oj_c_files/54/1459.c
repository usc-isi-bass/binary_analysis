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

int s(int n,int k,int m,int i)
{   if(i!=n)
	{++i;
     if(m%(n-1)==0)
{return s(n,k,m*n/(n-1)+k,i);}
	 else
		 return -1;
}
else
{return m;}
}
int main()
{   int n,k,m,i=1;
    cin>>n>>k;
	for(;;++i)
	{
		if(s(n,k,i,0)==-1)
			continue;
		else
		{cout<<s(n,k,i,0);break;}
	}
	return 0;
}


