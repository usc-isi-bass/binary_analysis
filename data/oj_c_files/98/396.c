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
	char w[315][45];
	int i,j,k,n,g,m=0,len[315];
	cin>>n;
	for (i=0;i<=n-1;i++)
	{
		cin>>w[i];
		len[i]=strlen(w[i]);
	}
	

	for (j=0;j<=n-1;)
	{
        
		if (m==0)
		{
			m=m+len[j];
			cout<<w[j];
			j=j+1;
		}
		else
		{

		if (m+len[j]+1<=80)
		{
			m=m+len[j]+1;
			
				cout<<" "<<w[j];
				j=j+1;

			
		}
		else
		{
			cout<<endl;
			m=0;
			
		}
		}
	}
		return 0;
	}
