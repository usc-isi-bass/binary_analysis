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
 * ????27.cpp
 * ??:???
 * ????: 2012-11-10
 * ??:????????
 */


int main(){
	int n=0,flag[90];                           //flag??????????????????????????????
	                                            //???????????10???100?????flag90???
	cin>>n;
	int a[n];                                   //?a[n]???????
	for(int i=0;i<n;i++){
		cin>>a[i];
		flag[a[i]-10]=1;                        //?10~99????x???,?flag[x-10]=1,????????x?
	}
		for(int j=0;j<n;j++){
		if(flag[a[j]-10]){
			if(j){                               //????????????????
				cout<<' '<<a[j];
			}else{
				cout<<a[j];
			}
		}
		flag[a[j]-10]=0;                         //???flag[x-10]??0???????????
	}
	return 0;
}