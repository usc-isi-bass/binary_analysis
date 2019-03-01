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
	int n,a,b,c,i,max=0,j;
	int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int e[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(j=1;j<=n;j++){
		cin>>a;
		cin>>b;
		cin>>c;
		if(a%400==0||(a%4==0&&a%100!=0)){
		   if(b>c)	{
			   for(i=c;i<b;i++)
				   max=max+e[i];
			   }
		   if(b<c){
			   for(i=b;i<c;i++)
			   	 max=max+e[i];
		   }
			   if(max%7==0) cout<<"YES"<<endl;
			   else cout<<"NO"<<endl;
		      max=0;
		}
		else {
			   if(b>c)	{
						   for(i=c;i<b;i++)
							   max=max+d[i];
						   }
			    if(b<c){
						   for(i=b;i<c;i++)
						   	 max=max+d[i];
					   }
						   if(max%7==0) cout<<"YES"<<endl;
						   else cout<<"NO"<<endl;
					      max=0;
		}
	}



}

