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
 * wangge25.cpp
 *
 *  Created on: 2010-11-6
 *      Author:???
 */
int main()                       //???
{
	int n,i,j,k,t=0;                 //??????n,i,j,k,t??t ????0
	cin>>n;                             //??n??
	int a[n];                      //??????a[i]
	for(i=0;i<n;i++){                  //???????i
	cin>>a[i];                       //????a[i]??????
	}
	for (i=0; i<n; i++ )                   //???????i
			if (a[i]>=0)                          //??a[i]????0
				for (j=i+1; j<n; j++ )              //???????j
					if (a[i]==a[j]) a[j]=-1;       //??a[i]??a[j]??a[j]???-1

		for (i=0; i<n; i++ )                     //???????i
			if (a[i]>=0)                        //??a[i]??0???????
			{
				if (i>0) cout<<' ';             //??a[i]????0????????
				cout<<a[i];                  //????a[i]??
			}

		return 0;                           //?????
	}
