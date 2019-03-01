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
	int k;
	cin>>k;                       //??k?
	for(int a=0;a<k;a++)
	{
		int m,n;
		cin>>m>>n;
		int A[100][100];         //??????        
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>A[i][j];    //????
			}
		}
		int (*p)[100];          //????
		p = A;
		int num = 0;
		for(j=0;j<n;j++)
		{
			num = num+ *(*p+j); //???????
		}
		
		for(i=1;i<m-1;i++)      //??????????
		{
			num = num+ **(p+i)+ *(*(p+i)+n-1);
		}
	
		for(j=0;j<n;j++)        //????????
		{
			num = num+ *(*(p+m-1)+j);
		}

		cout<<num<<endl;        //????
	}
	return 0;
}