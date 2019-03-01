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
	int N;
	cin>>N;
	int i,k,num[500];
	for(i=0;i<N;++i) 
		cin>>num[i];
	for(i=0;i<N;++i)
	{
		if(num[i]%2==0) 
			num[i]=0;
	}
	sort(&num[0],&num[0]+N);
    for(i=0;i<N;++i)
	{
		if(num[i]!=0)
		{
			cout<<num[i];
			k=i;
			break;
		}
	}
	for(i=k+1;i<N;++i)
		cout<<","<<num[i];
	return 0;
}
