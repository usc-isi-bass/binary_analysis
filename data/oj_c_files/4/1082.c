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


int main (){
	int a[100][100];
	int (*p)[100]=a;
	int i,j;
	int r,c;
	cin>>r>>c;
	for(i=0;i<=r-1;i++)
		for(j=0;j<=c-1;j++)
			cin>>*(*(p+i)+j);
	int t;
	for(t=0;t<=c-1;t++)
	{
		for(i=0,j=t;(j>=0)&&(i<=r-1);i++,j--)
			cout<<*(*(p+i)+j)<<endl;
	}
	for(t=1;t<=r-1;t++)
	{
		for(i=t,j=c-1;(j>=0)&&(i<=r-1);i++,j--)
			cout<<*(*(p+i)+j)<<endl;
	}
}