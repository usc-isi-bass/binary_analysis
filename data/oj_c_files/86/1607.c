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

//????

 


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int failure,times[21],time,number;            //????????????????????
		cin>>failure;
		if(failure==0)                                     
			number=60;
		else
		{
		    for(int j=0;j<failure;j++)
				cin>>times[j];
		    for(int j=0;j<failure&&times[j]+3*j<60;j++)      //??times[j]+3*j<60??????????
		        { 
					if(times[j]+3*(j+1)<60)                  //times[j]+3*(j+1)<60,??????????????
			           number=times[j]+60-(times[j]+3*(j+1));	
					else number=times[j];
		         }
		}
		 cout<<number<<endl;
	 }

	return 0;
}