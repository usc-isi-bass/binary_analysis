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
	int n,i,len[1000];
	char word[1000][41],(*p)[41]=word;
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		len[i]=strlen(*(p+i));
	}
	int m=0,j=0;
	while(m<=80&&j<n)
	{
		if((m+len[j]<=80)&&(j<n-1))
		{
			m=m+len[j]+1;
			cout<<*(p+j);
			if(m+len[j+1]<=80)
				cout<<" ";
			j++;
		}
		if((m+len[j]<=80)&&j==n-1)
		{
			cout<<*(p+j)<<endl;
			break;
		}
		if(m+len[j]>80)
		{
			cout<<endl;
		    j=j;
			m=0;
		}
	}
	return 0;
}


	
	


