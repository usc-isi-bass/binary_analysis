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

int main ()
{
	int n=0,k=0;
	int ans[100]={1};
	cin>>n;
		for (int i=1;i<=n;i++){
			int flag=0;//???
			for (int j=0;j<k;j++){//k??????????
				if (ans[j]*2+flag<10) {//????????
					ans[j]=ans[j]*2+flag;
					flag=0;
				}
				else {//???
					ans[j]=ans[j]*2+flag-10;
					flag=1;
				}
			}
			//???????
			if (ans[k]*2+flag<10) 
					ans[k]=ans[k]*2+flag;
			else {
				ans[k]=ans[k]*2+flag-10;
				k+=1;
				ans[k]=1;
			}

		}
	
	for (int i=k;i>=0;i--)//????
		cout<<ans[i];

	return 0;
}