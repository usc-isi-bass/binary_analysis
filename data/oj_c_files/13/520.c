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
 * 1000012712_26.cpp
 * Author: ???
 * Created on: 2010-11-4
 * ?????????????
 */
int main(){
	int n;
	cin>>n;             //????????
	int a[20001];       //????
	int i;
	for(i=1;i<=n;i++)
		cin>>a[i];      //??n??
	int j=1;            //??????
	for(i=2;i<=n;i++){  //??????????
		for(j=1;j<i;j++){
			if(a[i]==a[j]){
				int u=i;
				if(a[i]==a[i+1])
					j--;
				while(i<n){
					a[i]=a[i+1];//???????????
					i++;
				}
				i=u;
				n--;
				i--;
			}
		}
	}
	for(i=1;i<n;i++)              //????????
			cout<<a[i]<<" ";
		cout<<a[n]<<endl;
	return 0;
}
