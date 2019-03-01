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
	int i,k,m,n,j,z,s;
	cin>>k;
	for(z=1;z<=k;z++)
	{
		s=0;
		cin>>m>>n;
			int a[100][100];
			for(i=0;i<m;i++)
					for(j=0;j<n;j++)
						cin>>a[i][j];
			if(m==1||n==1)
			{
				for(i=0;i<m;i++)
									for(j=0;j<n;j++)
										s=s+a[i][j];
			}
			else
		{for(i=0;i<n;i++)
			s=s+*(*a+i)+*(*(a+m-1)+i);
		for(i=1;i<m-1;i++)
			s=s+*(*(a+i))+*(*(a+i)+n-1);}
		cout<<s<<endl;
	}

}
