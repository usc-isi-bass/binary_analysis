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
 * ??????.cpp
 *  ????: 2010-11-14
 *     ??????
 */


int main(){
	for(int i=0;;i++){//????
		int a[16];
		int temp;
		cin>>temp;
		if(temp==-1)
		break;//??-1???
		else a[0]=temp;
		int n=1;
		for(int j=1;;j++){
			int temp1;
			cin>>temp1;
			if(temp1==0)//??0???????
				break;
			else {a[j]=temp1;
			n++;
			}
		}
		int m=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){

				if((a[i]==(2*a[j])))
					m++;//??2????

			}
		}
		cout<<m<<endl;//????
	}
	return 0;
}

