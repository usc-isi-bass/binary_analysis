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

/****************
?????????
???????
****************/
int main()
{
	int n,i,j;                                   //??????n,i,j

	double x[10000],y[10000],dis[10000];         //???????????
	cin>>n;                                      //??n
	for(i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];                        //??????x[i],y[i]
	}

	int k=1;
    for (i=1;i<=n;i++)                         //???????n???
	{
         for (j=1;j<=n;j++)                    //?????
		 	
			 { dis[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));   //?????????
				 k=k+1;                                                        //?k??1
				}
		 
	}

		
				 
				 
				 
	double max=0;		                //???max	 
				 
				 
	for (k=1;k<=10000;k++)             //????

		
		
			 if (max<dis[k])          //???????????
			 {
				 max=dis[k];
			 }
			 

	
	printf("%.4f\n",max);          //??????????????????
	return 0;
}