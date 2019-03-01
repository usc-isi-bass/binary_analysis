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
	int array[100][100]={0};
	int x,y;
	cin>>x>>y;
	for(int i=0;i!=x;i++)
		for(int j=0;j!=y;j++)
			cin>>array[i][j];
	int x1=0,x2=x-1,y1=0,y2=y-1;
	while(x2>=x1&&y2>=y1)
	{
		if(x2==x1&&y2==y1)
			cout<<array[x1][y1]<<endl;
		else if(x2==x1)
		{
			for(int k=y1;k<=y2;k++)
				cout<<array[x1][k]<<endl;
		}
		else if(y1==y2)
		{
			for(int k=x1;k<=x2;k++)
				cout<<array[k][y1]<<endl;
		}
		else
		{
			for(int k=y1;k<y2;k++)
		    	cout<<array[x1][k]<<endl;
		    for(int k=x1;k<x2;k++)
		    	cout<<array[k][y2]<<endl;
		    for(int k=y2;k>y1;k--)
		    	cout<<array[x2][k]<<endl;
		    for(int k=x2;k>x1;k--)
		    	cout<<array[k][y1]<<endl;
		}
	  	x1++;
	   	x2--;
	   	y1++;
    	y2--;
	    
	}
	return 0;
}