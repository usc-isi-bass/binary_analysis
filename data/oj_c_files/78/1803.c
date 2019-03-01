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

/*
 * 1.cpp
 *  use??????????????????????????
 *  Created on: 2012-11-5
 *      Author: lyx
 */

int main()
{
	int z=0,q=0,s=0,l=0,i,j,a1,b1;                     //????
	int a[6];
    char b[6];
	for (z=1;z<=5;z++)               //????????
		for (q=1;q<=5;q++)
			for (s=1;s<=5;s++)
				for (l=1;l<=5;l++)
					{if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)        //???????????
				     {


                        a[1]=z;                             //??????????????
                        a[2]=q;
                        a[3]=s;
                        a[4]=l;
                        b[1]='z';                           //??????????
                        b[2]='q';
                        b[3]='s';
                        b[4]='l';

                     for (i=1;i<=4;i++)                     //????????????????
                     {
    	                 for (j=1;j<=4-i;j++)
    	                 {
    		                  if (a[j]<a[j+1])
    		                  {
    			                  a1=a[j];                  //????????????????????????
    			                  a[j]=a[j+1];
    			                  a[j+1]=a1;
    			                  b1=b[j];
    			                  b[j]=b[j+1];
    			                  b[j+1]=b1;
    		                  }
    	                 }
                     }


                     for (i=1;i<=4;i++)
                     {
	                     cout<<b[i]<<" "<<a[i]*10<<endl;
                     }
					 }
					}


	return 0;
}
