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
	int m,n,i,j,hill[20][20],ave;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>hill[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==0||hill[i][j]>=hill[i-1][j])
				if(i==m-1||hill[i][j]>=hill[i+1][j])
					if(j==0||hill[i][j]>=hill[i][j-1])
						if(j==n-1||hill[i][j]>=hill[i][j+1])
							cout<<i<<" "<<j<<endl;
		}
		return 0;


}