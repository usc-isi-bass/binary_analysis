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
	int i,num,k,a[6];

	cin>>num;
    if(num==0) cout<<num;	
	for(i=5;i>=0;i--)
	{
		a[5-i]=num/(pow((float)10,i));
		num=num-a[5-i]*pow((float)10,i);
	
	}

	for(i=0;i<6;i++)
	{

	if(a[i]!=0) break;
	
	
	}

	for(k=5;k>=i;k--)
	{
	
	cout<<a[k];
	
	}

	return 0;
}

