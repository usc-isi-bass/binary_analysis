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

//??????????

int main()                    //?????
{
	int a[100][100],b[100][100],c[100][100]={0};   //????????c???????0
	int m,n,x1,x2,y1,y2,k;    //??????m,n,??????x1,x2,y1,y2,??k
	cin>>x1>>y1;              //????a??
	for(m=0;m<x1;m++)
         {
	    for(n=0;n<y1;n++)
		{
		 cin>>a[m][n];         //????a?????
		}
	}
         cin>>x2>>y2;               //????b??
	for(m=0;m<x2;m++)         
         {
		for(n=0;n<y2;n++)
		{
			cin>>b[m][n];      //????b????
		}
	}
	for(m=0;m<100;m++)
		for(n=0;n<100;n++)
			for(k=0;k<y1;k++)
			{
			    c[m][n]+=a[m][k]*b[k][n];     //????a?b?????????c?
			}
	for(m=0;m<x1;m++)
	{
	    for(n=0;n<y2;n+=1)
	    {
	    cout<<c[m][n];        //????c?????
	    if(n<y2-1)
		cout<<' ';
	    }
	cout<<endl;
	 }
	return 0;
}                                          //?????