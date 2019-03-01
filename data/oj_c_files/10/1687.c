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
	int i,j,k;
	int max=0;
	int maxall=1;
	int num[10000];
	int hight[10000];
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>hight[i];
		num[i]=0;
	}
	num[0]=1;
	for(i=1;i<k;i++)
	{
	  max=1;
      for(j=0;j<i;j++)
	  {
		  if( hight[j]>=hight[i] && max<num[j]+1 )
			  max= num[j]+1;
	  }
	  num[i]= max;
	  if( num[i]>maxall ) maxall = num[i];
	}
	cout<<maxall<<endl;
	return 0;
}