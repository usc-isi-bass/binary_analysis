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
	int n,k=0;
	cin>>n;
	float a[n],ar,sum=0,max=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	ar=sum/n;
	for(int i=0;i<n;i++)
		if(abs(a[i]-ar)>=max)max=abs(a[i]-ar);
	for(int i=0;i<n;i++)
		if((abs(a[i]-ar)==max)&&k==0){cout<<a[i];
		k++;
		}
		else if((abs(a[i]-ar)==max)&&k!=0){cout<<','<<a[i];
		k++;
		}
	return 0;
}