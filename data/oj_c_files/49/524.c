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
 * huiwen.cpp
 *
 *  Created on: 2011-12-18
 *      Author: admin
 */
int main(){
	int i,begin,begin1,end1,flag,len,length;
	char a[501];
	cin>>a;
	length=strlen(a);
	for (len=2;len<=length;len++){//???????
		for (begin=0;begin<=length-len;begin++){//??????
			begin1=begin;end1=begin+len-1;
			flag=1;
			while(begin1<end1){//?????????????
				if (a[begin1]!=a[end1]){flag=0;break;}
				begin1++;end1--;
			}
			if (flag){
				for(i=begin;i<=begin+len-1;i++){//??????
					cout<<a[i];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
