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
	int m[100],n,k;//m??????n? ????k?????
    cin>>n>>k;
	int i;//????
    int g=0;//????
	m[n]=n+k;
	while(g==0)
	{

		for(i=n-1;i>0;i--)
			{
				if(m[i+1]%(n-1)!=0) break;
				m[i]=m[i+1]*n/(n-1)+k;
			}
		m[n]=m[n]+n;
	    if(i==0)
	    {
	    	g=1;
	    }
	}
	cout<<m[1];
	return 0;

}
