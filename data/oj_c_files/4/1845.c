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
	int array[100][100];
	memset(array,0,sizeof(array));
	int i,j,k,row,col;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>array[i][j];
	}
	for(k=0;k<row+col-1;k++)
	{
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
			{
				if(i+j == k)
					cout<<array[i][j]<<endl;
			}
	}
	return 0;
}

	
	




