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
 * temperary.cpp
 *
 *  Created on: 2011-12-25
 *      Author: ???
 */

void sort(char a[],int n){//?asc2?????
	int i,j;
	char t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
}
int main() {
	char a[100],b[100];
	cin>>a>>b;
	int l1=strlen(a),l2=strlen(b);
	if(l1!=l2)cout<<"NO"<<endl;//???????NO
	else{
		sort(a,l1);sort(b,l2); //?????????
		if(strcmp(a,b)==0)cout<<"YES"<<endl;//????????YES???NO
		else cout<<"NO"<<endl;
	}
	return 0;
}

