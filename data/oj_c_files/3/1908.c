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

int main()                                  //?????
{
	int n,k,x,i=1,j,A=0;                    //?????????n??k????x?????i,j,????A
	scanf("%d %d",&n,&k);                   //??n,k
	int a[1000];                            //????a[1000]
	for(i=1;i<=n;i++)                       //?????
	{
	    cin>>a[i];
	}
	for(i=1;i<n;i++)                        //????
	{
		for(j=i+1;j<=n;j++)                 //???????a[i]?????????
		{
			if(a[i]+a[j]==k)                //????????k????yes
			{
					cout<<"yes"<<endl;
					A++;
					break;
			}
		}
		if(A==1)
			break;
	}
	if(A==0)
		cout<<"no"<<endl;                   //??????????????no
	return 0;
}