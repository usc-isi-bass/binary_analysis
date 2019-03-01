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
	double sz[100][2];

	int i;
	
	for( i=0;i<n;i++)
	{
		cin>>sz[i][0]>>sz[i][1];
		if(i>=1)
		{
			if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]>0.05)
				cout<<"better"<<endl;
			else if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]<-0.05)
				cout<<"worse"<<endl;
			else
				cout<<"same"<<endl;
		}
	}

			

		
	
	
	
	return 0;
}
