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
	int i,k,n[100],max,max2;
	cin>>k;
	for(i=0;i<k;i++)cin>>n[i];
	i=0;
	max=0;
	max2=0;
	do
	{
		if(n[i]>max)max=n[i];
		i++;
	}while(i<k);
	i=0;
	do
	{
		if(max2<=n[i]&n[i]<=(max-1))max2=n[i];
		i++;
	}while(i<k);
	cout<<max<<endl;
	cout<<max2<<endl;
	return 0;
}
