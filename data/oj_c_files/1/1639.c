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

int d(int,int);
int main()
{
	int i,n,x;
	cin>>n;
	for(i=1;i<=n;i++)    
	{
		cin>>x;
		cout<<d(x,2)<<endl;    
	}
	return 0;
}
int d(int x,int y)
{
	int j,num=1;   
	if(x==1)
		return 0;    
	if(x==2)
		return 1;    
	for(j=y;j<=(int)sqrt((double)x);j++)
		if(x%j==0)
			num+=d(x/j,j);  
	return num;	   
}
