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


int main() {
    int n,a[100],temp=0;         //????
    cin>>n;
    int *p=NULL,*q=NULL;          //??????p?q?????
    for(p=a;p<a+n;++p)        //??????
    	cin>>*p;
    for(p=a,q=a+n-1;p<q;++p,--q)         //????
    {
    	temp=*p;
    	*p=*q;
    	*q=temp;
    }
    p=a;
    cout<<*p;              //?????
    for(p=a+1;p<a+n;++p)
    	cout<<' '<<*p;
	return 0;
}
