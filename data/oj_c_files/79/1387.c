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

const int MAX_NUM=300;
int anLoop[MAX_NUM+10];
int main()
{
	int n,m;
	while(1)
	{
		cin>>n>>m;
		if(n==0&&m==0)break;
		for (int i=0;i<n;i++)
		anLoop[i]=i+1;
		int nPtr=0;
		for(int i=0;i<n;i++)
		{
			int nCounted=0;
			while(nCounted<m)
			{
				while(anLoop[nPtr]==0)
				nPtr=(nPtr+1)%n;
				nCounted++;
				
				nPtr=(nPtr+1)%n;	
			}
			nPtr--;
			if(nPtr<0) nPtr=n-1;
			if(i==n-1)
			cout<<anLoop[nPtr]<<endl;
			anLoop[nPtr]=0;	
		}	
	}
	
	return 0;	
}
