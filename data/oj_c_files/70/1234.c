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

int main(){
	double x[100],y[100],d[5000],max=0;//?????x?y???????d???????max??????
    int n;//??????
	cin>>n;//??????
	for (int i=1;i<=n;i++)
		cin>>x[i]>>y[i];//??????
	for (int i=1;i<=n-1;i++)//????????????
		for(int j=i+1;j<=n;j++){
			d[(2*n-i)*(i-1)/2+j-i]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);//???????
			if(d[(2*n-i)*(i-1)/2+j-i]>max)//??????????
				max=d[(2*n-i)*(i-1)/2+j-i];//?????????
		}
	max=sqrt(max);//??????
	cout<<fixed;
	cout<<setprecision(4)<<max<<endl;//?????????????
	return 0;
}