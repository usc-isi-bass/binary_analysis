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
	int n;
	cin>>n;

	if(n==0)
		cout<<1;
	else

	{
			int an[100];
			memset(an,0,sizeof(an));
			an[0]=2;
			for(int i=1;i<n;i++)
			{
				for(int jjj=0;jjj<90;jjj++)
					an[jjj]=2*an[jjj];
				for(int j=0;j<90;j++)
				{
					if(an[j]>=10)
					{
						an[j]=an[j]-10;
						an[j+1]+=1;
					}
				}
			}	
			int jj=90;
			while(an[jj]==0)
				jj--;
			for(int mm=jj;mm>=0;mm--)
				cout<<an[mm];
	}
	return 0;
}







