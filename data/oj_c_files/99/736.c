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
	int n;
	cin>>n;
	int a[100],i;
	float b=0,c=0,d=0,e=0;//bcde?????
	for(i=0;i<n;i++)
	{
     cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	 if(a[i]<19)b=b+1;
	 if(a[i]>18&&a[i]<36)c=c+1;
	 if(a[i]>35&&a[i]<61)d=d+1;
	 if(a[i]>60)e=e+1;
	}
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
	e=e/n*100;
	cout<<"1-18: ";
	printf("%.2f",b);
	cout<<'%'<<endl;
	cout<<"19-35: ";
	printf("%.2f",c);
	cout<<'%'<<endl;
	cout<<"36-60: ";
	printf("%.2f",d);
	cout<<'%'<<endl;
	cout<<"60??: ";
	printf("%.2f",e);
	cout<<'%'<<endl;
	getchar();
	getchar();
	return 0;
}


