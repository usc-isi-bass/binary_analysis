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

/*??(15-11) ?????*/ 



int types(int m,int n);

int full(int m,int n)//m?????n???
{
	if(m<=n || n==1) return 1;
	else
	{
		return types(m-n,n);
	}
} 

int types(int m,int n)//m?????n??? 
{
	int num=0;
	int i;
	if(m<n) return types(m,m);
	else 
	{
		for(i=0;i<n;i++) num=num+full(m,n-i);
		return num;
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m>>n;
    	cout<<types(m,n)<<endl;
    }
	return 0;
}