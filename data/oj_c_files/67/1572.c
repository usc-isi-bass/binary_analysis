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
	int n,k;
	double groups[1000][3];
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>groups[k][0]>>groups[k][1];
	}
	for(k=0;k<n;k++)
	{
		groups[k][2]=groups[k][1]/groups[k][0];
	}
	for(k=1;k<n;k++)
	{
		if((groups[k][2]-groups[0][2])>0.05)
			cout<<"better"<<endl;
		else if((groups[0][2]-groups[k][2])>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}
