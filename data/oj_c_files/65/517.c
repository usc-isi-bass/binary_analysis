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
	int n;
	cin>>n;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		int a1,b1;
		cin>>a1>>b1;
		if(a1==0){
			if(b1==1) a++;
			if(b1==2) b++;
		}else if(a1==1){
			if(b1==2) a++;
			if(b1==0) b++;
		}else{
			if(b1==0) a++;
			if(b1==1) b++;
		}
	}
	if(a>b) cout<<"A";
	if(a<b) cout<<"B";
	if(a==b) cout<<"Tie";
	cout<<endl;
	return 0;
}
