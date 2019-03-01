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

int main()
{
	int num;
	cin>>num;
	while(num--){
		int n;
		cin>>n;
		if(n==0) cout<<"60"<<endl;
		else{
			int a[20],i,sum=60,time=60;
			for(i=0;i<n;i++)
				cin>>a[i];
			for(i=0;i<n;i++){
				if(time-a[i]<=3){
					time=time-a[i];
					if(time>0) sum-=time;
					break;
				}
				else{
					time-=3;
					sum-=3;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
