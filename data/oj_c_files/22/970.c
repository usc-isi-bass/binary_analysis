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
    char c;
	int dd1,dd,max,max1,i,j,k,n,a1,a2,a3;
    dd=1;
	max=0; max1=0;
	dd1=0;
    cin>>n;
	max=n;
		c=getchar();
	if (c==EOF || c=='\n')
	{ dd=0;}
	while (dd=1) 
	{   
		cin>>n;
		if (n>max) {max1=max; max=n;dd1=1;}
		if (n<max && n>max1) {max1=n; dd1=1;}
		c=getchar();
		if (c==EOF || c=='\n')
		{ break;}
	}
    if (dd1==1) cout<<max1;
	if (dd1==0) cout<<"No";
	return 0;

}
