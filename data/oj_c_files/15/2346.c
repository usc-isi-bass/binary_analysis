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

/*??(5.9) ???? (1111)*/ 



int main()
{
	int i,j,n,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	    	cin>>a;
	    	if(a==0) break;
	    }
	    if(a==0) break; 
	}
	int s=0;
	while(++j<=n)//???????? 
	{
		if(a==0) s++;
		cin>>a;
	}
	int num=0;
	for(i+=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	    {
	    	cin>>a;
	    	if(a==0) num++;
	    }
	int r;
	r=(num-s)/2;//?????? 
	s-=2;//??????????????-2 
	cout<<r*s<<endl;
	return 0;
}