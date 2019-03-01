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
 * 5.9.cpp
 *
 *  Created on: 2011-10-27
 *      Author: sony
 */

int main()
{
	int n;
	cin>>n;
	int dt[n],i,j,k,p,q,N,sum=0;
	for(j=1;j<=n;j++){          //?j???
		for(i=0;i<n;i++)
			cin>>dt[i];         //???j???

		for(p=0;p<n;p++){
			if(dt[p]==0){          //????????
				for(k=n-1;;k--){    //???????????
					if(dt[k]==0)
					{N=k;
					break;
					}
				}
				for(q=p;q<=N;q++){
					if(dt[q]!=0) sum++;
				}
			}
		}

	}


	cout<<sum<<endl;
	return 0;
}
