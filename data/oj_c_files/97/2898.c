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
	int x,a[6]={100,50,20,10,5,1},b[6];//???????b[i]?????? 
	cin>>x;
	for(int i=0;i<6;i++){
		b[i]=(x-x%a[i])/a[i];
		x=x-a[i]*b[i];
		cout<<b[i]<<endl;//??b[i]??? 
		}
		
		return 0;
	} 
