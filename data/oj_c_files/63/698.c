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

//******************************************************************************************
//????????????????                                                         *
//????wayne                                                                            *
//?????10.27                                                                          *
//******************************************************************************************
int main()
{
    int a[101][101],b[101][101];   //??????
	int x1,y1,x2,y2,i,j,k,c;       
	cin>>x1>>y1;
	for (i=1;i<=x1;i++)          //????????????
	{for (j=1;j<=y1;j++)         //????????????
			cin>>a[i][j];        //?i??j????
	cout<<endl;}
	cin>>x2>>y2;
	for (i=1;i<=x2;i++)          //????????????
	{for (j=1;j<=y2;j++)         //????????????
			cin>>b[i][j];
	cout<<endl;}   
	for (i=1;i<=x1;i++)
		for (j=1;j<=y2;j++)
		{
			c=0;
	        for (k=1;k<=x2;k++)      
				c=c+a[i][k]*b[k][j]; //?????????????i??j????
			if (j<y2)  cout<<c<<" ";
			else cout<<c<<endl;      //???????
		}
	return 0;
}
