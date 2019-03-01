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


int search(int x,int y,int z)
{
	int s=0,i;
	if(y>1)
		for(i=z;i<=x/y;i++)
			s+=search(x-i,y-1,i);
	else s=1;
	return s;
}

int main()
{ 
	int t,M,N,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>M>>N;
		cout<<search(M,N,0)<<endl;
	}
	return 0;
}