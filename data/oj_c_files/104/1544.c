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
    int xpath[100]={0},ypath[100]={0};
    int xi=0,yi=0;
    cin>>xpath[0]>>ypath[0];
    while(xpath[xi]!=1)
	{
	      xpath[xi+1]=xpath[xi]/2;
	      xi++;
	}
    while(ypath[yi]!=1)
	{
	      ypath[yi+1]=ypath[yi]/2;
	      yi++;
}
while(xi>=0 && yi>=0)
{
	if(xpath[xi]!=ypath[yi])
	{
		cout<<xpath[xi+1]<<endl;
		return 0;
	}
	xi--;
	yi--;
}
cout<<(xi<0?xpath[0]:ypath[0])<<endl;
return 0;
}
