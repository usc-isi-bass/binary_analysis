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
 * ??????????.cpp
 *  Created on: 2012-12-14
 *  Author: ???
 */
int main(){
	int row,col,a[150][150];
	cin>>row>>col;//??????
	for(int i=0;i<row;i++){//??
		for(int j=0;j<col;j++){
			cin>>*(*(a+i)+j);
		}
	}
	for(int sum=0;sum<=row+col-2;sum++){//sum???????????????
		if(sum<col){//??????
			for(int i=0;i<row&&i<=sum;i++){//????0?????sum???????
				cout<<*(*(a+i)+(sum-i))<<endl;
			}
		}else{//???????
			for(int i=sum-col+1;sum-i>=0&&i<row;i++){//????sum-col+1??????col-1???????
				cout<<*(*(a+i)+(sum-i))<<endl;
			}
		}
	}
	return 0;
}
