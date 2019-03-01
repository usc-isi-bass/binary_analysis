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
	int n,i;
	float r,m,a[100],b[100];
	cin>>n;
	for(i=0;i<=n-1;i++)
	cin>>a[i]>>b[i];
	r=b[0]/a[0];
	for(i=1;i<=n-1;i++)
	{
		m=b[i]/a[i];
		if(m-r>0.05)
			cout<<"better"<<endl;
		if(m-r<-0.05)
			cout<<"worse"<<endl;
		if((m-r<=0.05)&&(m-r>=-0.05))
			cout<<"same"<<endl;
	}
return 0;
}
