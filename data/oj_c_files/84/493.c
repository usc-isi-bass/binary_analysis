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

//******************************
//*????jmyhhx.cpp*
//*??????*
//*?????2010?10?9?*
//*?????????????*
//****************************

int main()
{
	int k=0,i=0,j=0,max=0,imax=0;
	cin>>k;
	cin>>j;
	max=j;
	imax=j;
	for(i=2;i<=k;i++)
	{
		cin>>j;
		if (j>=max)
			max=j;
		else
		if(j>=imax)
			imax=j;
	}
	cout<<max<<endl;
	cout<<imax<<endl;
	return 0;


}