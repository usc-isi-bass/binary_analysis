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

//============================================================================
// Name        : shj.cpp
// Author      : ???
// Time        : 2013.12.13
// Description : ????
//============================================================================
int main(){
	int n=0;
	cin>>n;//?????????
	int i=0,p[100];
	for(i=0;i<n;i++)
		cin>>*(p+i);//????
    cout<<*(p+n-1);//???????????
   if(n>1)
	   for(i=n-2;i>=0;i--)
	      cout<<" "<<*(p+i);//???????
	cout<<endl;
	return 0;
}
