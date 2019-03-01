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
	int i,j,n,a,x[20];
	x[1]=1;x[2]=1;
	cin>>n;
	for(j=1;j<=n;j++){
		cin>>a;
 	    if(a==1)cout<<"1";
 	    else if(a==2)cout<<"1";
 	    else {{for(i=3;i<=a;i++)
 	    	x[i]=x[i-1]+x[i-2];}
 	        cout<<x[a]<<endl;}
	}
}