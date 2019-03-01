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
	int a[5][5],i,j,max[5],min[5],k=0;//a[5][5]:?? (5*5)??;max[5]:?????;min[5]:?????;k:???????
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
		max[i]=a[i][0];
		for(j=0;j<5;j++)
			if(max[i]<a[i][j])
				max[i]=a[i][j];
	}
	for(j=0;j<5;j++)
	{
		min[j]=a[0][j];
		for(i=0;i<5;i++)
			if(min[j]>a[i][j])
				min[j]=a[i][j];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==max[i]&&a[i][j]==min[j])
			{
				cout<<++i<<" "<<++j<<" "<<a[i][j]<<endl;
                k++;
			}			
		}
	}
	if(k==0)
		cout<<"not found"<<endl;
	return 0;
}
