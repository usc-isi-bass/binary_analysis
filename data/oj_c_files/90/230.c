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



int put(int apple,int plate,int min)
{
	int count=0;
	if(plate==1)
	{
		if(apple>=min) return 1;
		else return 0;
	}
	for(int i=min;i<=apple;i++)
	{
		count+=put(apple-i,plate-1,i);
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		cout<<put(m,n,0)<<endl;
	}
	return 0;
}
