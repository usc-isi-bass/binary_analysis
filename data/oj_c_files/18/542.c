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
	int n,cycle;
	cin>>n;
	for(cycle=0;cycle<n;cycle++)
	{
		int i,j,a[100][100]={0},w,sum=0;

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++) cin>>a[i][j];
		}                                                     //in



		w=n;int min;

		while(w>1)
		{
			for(i=0;i<w;i++)
			{
					min=a[i][0];
				for(j=0;j<w;j++)
				{
					if(min>a[i][j]) min=a[i][j];
				}
				for(j=0;j<w;j++) a[i][j]-=min;
			}



			for(j=0;j<w;j++)
			{ 
				int count=0;
				
				for(i=0;i<w;i++)
				   {
				
					if(a[i][j]==0) {count++;break;}
				   }

				if(count==0)
				   {
                     min=a[0][j];
					for(i=0;i<w;i++)
					{
						if(a[i][j]<min) min=a[i][j];
					}
				 
					for(i=0;i<w;i++) a[i][j]-=min;
				     }

			}



			sum+=a[1][1];
			for(j=2;j<w;j++) a[0][j-1]=a[0][j];
			for(i=2;i<w;i++) a[i-1][0]=a[i][0];
			for(i=2;i<w;i++)
			{
				for(j=2;j<w;j++) a[i-1][j-1]=a[i][j];
			}
			w--;

		}
		cout<<sum<<endl;
		


		


	}
	return 0;

}