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

//******************************************************************************
//??????????                                                         *
//????wayne                                                                *
//?????10.23                                                              *
//******************************************************************************
int main()
{
	int n,m,a[301],i,j,t,k;
	while (cin>>n>>m&&n!=0)        //??????????????
	{
       for (k=1;k<=n;k++)     
		   a[k]=1;                 //??????????1
	   i=1;
	   for (j=n;j>1;j--)           //j?????????????1???????
	   {
		   t=0;
	        while (t<m)            //?????m?
			{
		        if (a[i]!=0)       //??????????
				{
			      t=t+1;           //??????
			      i=i+1;           //??????
				}
		        else i=i+1;
		        if (i>n)  i=i-n;    //?????????
			}
			if (i==1)  a[n]=0;       
		    else a[i-1]=0;           //?m??????
	   }
	   for (k=1;k<=n;k++)
		   if (a[k]!=0)
		   {cout<<k<<endl;           //???????????????
		   break;}
	}
	return 0;
}