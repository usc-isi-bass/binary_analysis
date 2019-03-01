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
 * 1000012862_25.cpp
 *??????????
 *  Created on: 2010-10-30
 *      Author: ???
 */
int main()                               //???
{
	int n,i,k,num,t=0;                    //???????i?k?num?t
	cin>>n;                                //??????
	cout<<endl;                       //??
	int a[n];                            //????a[n],???????
        for(i=0;i<n;i++)                   //???????i
        {       
		cin>>a[i];                        //??????a[i]??
		}
        cout<<endl;                          //??
        cin>>num;                           //???????
        cout<<endl;                        //??
        for(i=0;i<n;i++)                             //???????i
        {
        	if(a[i]==num)                      //??a[i]??num
        	{
        		t++;                     //??????t????1
                for(k=i;k<n;k++)                 //???????k
                {
        		a[k]=a[k+1];                //?a[i]???????????????
        		}
                i--;                        //??????i????1??i-1????
                }
                }
        for(i=0;i<n-t-1;i++)                  //???????i
        cout<<a[i]<<" ";                        //?i<n-t-1???????a[i]
        cout<<a[i];                                 //?i=n-t-1?????a[i]
return 0;                                       //?????
}
