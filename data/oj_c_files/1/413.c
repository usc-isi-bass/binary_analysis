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

int f(int,int);      //????
int main( )      //?????
{      //?????
	int n,i,a[50];
	cin >>n;      //??????
	for(i=0;i<n;i++){
		cin >>a[i];      //????
		cout <<f(a[i],2) <<endl;      //????
	}
	return 0;      //???????????????????
}      //?????
      
int f(int n,int p)      //??????????????p?????

{
	int sum=0,m;
	if(n<p) return 0;
	else{
		for(m=p;m<=n;m++)
			if(n%m==0){
				if(m<n) sum=sum+f(n/m,m);      //n?????m??????n/m??????m???????
				if(m==n) sum=sum+1;      //n?????n??????1
			}
			return sum; 
	}
}
