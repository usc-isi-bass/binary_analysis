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

//**********************************
//****       ??????     *****
//****        1200016612       *****
//**  ????????????  ****
//**********************************
int main()                                            //?????
{
	int n=0,i=0,j=0,k=0,s=0;
	int b[100],a[100][100];                           //??a[100][100]???n???????b[100]??????????a[1][1]???
	cin>>n;
	for(i=0;i<n;i++)                                  //??n?n???
	{
			for(j=0;j<n;j++){                         //??n???
				for(k=0;k<n;k++){
					cin>>a[j][k];
				}
			}
        for(s=n;s>1;s--)                               //?????n-1?
		{
			int min1=10000;                             
			for(j=0;j<n;j++)                            //??????????????????????????
			{
				min1=10000;
				for(k=0;k<n;k++)
				{
					if(a[j][k]<min1)
					{
						min1=a[j][k];
					}
				}
				for(k=0;k<n;k++)
				{
					a[j][k]-=min1;
				}
			}
			for(j=0;j<n;j++)                                   //??????????????????????????
			{
				min1=10000;
				for(k=0;k<n;k++)
				{
					if(a[k][j]<min1)
					{
						min1=a[k][j];
					}
				}
				for(k=0;k<n;k++)
				{
					a[k][j]-=min1;
				}
			}
			b[n-s]=a[1][1];                                      //??????a[1][1]
			for(j=2;j<n;j++)                                     //?a[1][1]?????????????
			{
				for(k=0;k<n;k++)
				{
					a[k][j-1]=a[k][j];
				}
			}
			for(k=2;k<n;k++)
			{
				for(j=0;j<n;j++)
				{
					a[k-1][j]=a[k][j];
				}
			}
		}
		int sum=0;                                               
		for(k=0;k<n-1;k++)                                        //??????????a[1][1]??
		{
			sum=sum+b[k];
		}
		cout<<sum<<endl;                                          //????????
	}
	return 0;
}