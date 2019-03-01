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

//????????


int main()
{
	int a[100][100],row ,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)             //????
		for(int j=0;j<col;j++)
			cin>>a[i][j];
	int flag=0;       //??
	for(int i=0;;i++)
	{
		for(int j=i;j<=col-i-1;j++)       //??
		{
			cout<<a[i][j]<<endl;
			flag+=1;
			if(flag==row*col)
				break;
		}
		if(flag==row*col)
				break;
		for(int j=i+1;j<=row-i-1;j++)      //??
		{
			cout<<a[j][col-i-1]<<endl;
			flag+=1;
			if(flag==row*col)
				break;
		}
		if(flag==row*col)
				break;
		for(int j=col-i-2;j>=i+1;j--)        //??
		{
			cout<<a[row-i-1][j]<<endl;
			flag+=1;
			if(flag==row*col)
				break;
		}
		if(flag==row*col)
				break;
		for(int j=row-i-1;j>=i+1;j--)          //??
		{
			cout<<a[j][i]<<endl;
			flag+=1;
			if(flag==row*col)
				break;
		}
		if(flag==row*col)
				break;
	}
	return 0;
}