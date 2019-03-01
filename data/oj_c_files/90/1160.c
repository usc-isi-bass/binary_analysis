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

int total;
int setapples(int m,int n)
{
	if(m==0||n==1)
			return (1);
		
	else
	{
		if(m<n)
		return setapples(m,m); 
		else
			return (setapples(m-n,n)+setapples(m,n-1));
	}

}
int main()
{
	int m[100],n[100],times,i;
	cin>>times;
	for(i=0;i<times;i++)
		cin>>m[i]>>n[i];
	for(i=0;i<times;i++)
		cout<<setapples(m[i],n[i])<<endl;
	return 0;
}
