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
	double n,i,x,y,a,b;   //????n?? i????  x,y??? a,b??
	cin>>n>>a>>b;         //???????????????
	x=b/a;                //???????????
	for(i=1;i<=n-1;i++)              
	{
		cin>>a>>b;                      //????n-1??????
		y=b/a;                          //???????
		if(x-y>0.05)                    //????????????
			cout<<"worse"<<endl;
		else if(abs(x-y)<=0.05)
			cout<<"same"<<endl;
		else if(y-x>0.05)
			cout<<"better"<<endl;
	}
	return 0;
}