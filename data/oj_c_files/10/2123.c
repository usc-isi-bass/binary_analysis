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

int aMaxLen[35];
int nTmp;
int main()
{
	int k,i;
	cin>>k;
	int b[25];
	for(i=0;i<k;i++)
		cin>>b[i];
		aMaxLen[1]=1;
	for(i=2;i<=k;i++)
	{
		int nTmp=0;
		for(int j=1;j<i;j++)
		{
			if(b[i]<b[j])
			{
				if(nTmp<aMaxLen[j])
					nTmp=aMaxLen[j];
			}
		}
		aMaxLen[i]=nTmp+1;
	}
	int nMax=-1;
	for(i=1;i<=k;i++)
		if(nMax<aMaxLen[i])
			nMax=aMaxLen[i];
	cout<<nMax<<endl;
	
	return 0;
}