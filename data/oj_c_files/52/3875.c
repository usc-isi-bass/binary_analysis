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

void shift(int *ptr,int n);    //????
int main()                     //?????
{
	int m,n,i;
	int a[100],*pta=NULL;      //???????
	cin>>n>>m;
	for(i=0;i<n;i++){          //???????
		cin>>a[i];
	}
	pta=a;                     //??????a??????
          shift(pta,n);              //??shift????????????
	shift(pta,m);              //??m?????
	shift(pta+m,n-m);          //??n-m?????
	for(i=0;i<n-1;i++){
		cout<<pta[i]<<" ";     //????
	}
	    cout<<pta[i];

	return 0;
}


void shift(int *pta,int n)
{
	int *p=NULL,*q=NULL,temp;  //????
	p=pta;
	q=pta+n;
	while(p<q){                //???????
          temp=*p;
		  *p=*q;
		  *q=temp;
		  p++;
		  q--;
	}
}



