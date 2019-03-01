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

int main()//?????
{
	int m,i,j,l,k,s;//????
	cin>>m;//??m
	s=0;
	for(i=2,s=0;i<=m/2;i++)//??
	{
		for(j=2,s=0;j<i;j++)//??
		{
			if(i%j==0)s=s+1;//??i??j,s=s+1
		}
		if(s==0)
		{
			l=m-i;//??s=0,??l
			for(k=2,s=0;k<l;k++)//??
				if(l%k==0)
					s=s+1;//??l??k?s=s+1
		}
		if(s==0)cout<<i<<" "<<l<<endl;//??s=0,??i,l		
	}
    return 0;
}