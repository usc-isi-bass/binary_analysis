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


int an[1000][1000];

int hang[1000],lie[1000];
int main()
{
	int n;
	cin>>n;
	int i,j,k,l,p,q;
	
	for(l=0;l<n;l++)
	{
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cin>>an[i][j];
		} 

		int sum=0;

		for(k=n;k>0;k--)
		{
			
			for(p=0;p<k;p++)
			{
				hang[p]=an[p][0];
				for(q=0;q<k;q++)
				{
					if(hang[p]>an[p][q])
						hang[p]=an[p][q];
				}
				for(q=0;q<k;q++)
					an[p][q]=an[p][q]-hang[p];
			}
			
			for(q=0;q<k;q++)
			{
				lie[q]=an[0][q];
				for(p=0;p<k;p++)
				{
					if(lie[q]>an[p][q])
						lie[q]=an[p][q];
				}
				for(p=0;p<k;p++)
					an[p][q]=an[p][q]-lie[q];
			}		
			
		
			
			

			sum=sum+an[1][1];
			
			for(i=0;i<k;i++)
			{
				for(j=1;j<k;j++)
					an[i][j]=an[i][j+1];
			}
			for(i=1;i<k;i++)
			{
				for(j=0;j<k;j++)
					an[i][j]=an[i+1][j];
			}
			
		}
	cout<<sum<<endl;
	}
	return 0;
}
	

				

 
