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
	int x[1000],y[1000],i=1,j,k,num[1000]={0},max=0;
	cin>>x[0];
	while(cin.peek()!='\n'){
		cin.get();
		cin>>x[i++];
	}
	for(j=0;j<i;j++){
		cin.get();
		cin>>y[j];
	}
	for(k=0;k<1000;k++)
	     for(j=0;j<i;j++)
		 {
			 if(k>=x[j]&&k<y[j])
				 num[k]++;
		 }
	for(j=0;j<1000;j++)
	    if(num[j]>max)max=num[j];
	cout<<i<<" "<<max;
     return 0;
}

