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

/*
 * ???008.cpp
 * Created on: 2012-10-14
 * Author: ???
 * ?????????
 */
int main(){
	int n,i=1,j=3;              //??n i j???
	int b[20];                //????
	b[1]=1,b[2]=1;          //??????1
	while(j<=20){           //????
	b[j]=b[j-1]+b[j-2];     //???????
	j=j+1;                  //?j?1
}
    cin>>n;                 //??n
    int a[n];               //??????
	while(i<=n){            //????
	cin>>a[i];              //?????????
	cout<<b[a[i]]<<endl;    //??????a??
	i=i+1;                  //?i?1
	}
	return 0;               //????
}