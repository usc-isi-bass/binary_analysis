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

//?????
//??? 1200017623
//????????????????????????????????????????



int main(){
	int n[5][5],i,j,k,column,num,flag = 1;
	for(i = 0; i < 5;i++){
		for(j = 0;j < 5;j++){
			cin>>n[i][j];
		}
	}

	for(i = 0;i < 5;i++){
		column = 0;
		num = n[i][0];

		for(j = 0;j < 5;j++){           //????????
			if(n[i][j] > num){
				num = n[i][j];
				column = j;
			}
		}

		flag = 1;

		for(k = 0;k < 5;k++){           //???????????
			if(n[k][column] < num){
				flag = 0;
				break;
			}
		}

		if(flag){
			cout<<i + 1<<' '<<column + 1<<' '<<num<<endl;
			break;                      //?????????
		}                  
	}
	if(flag == 0)cout<<"not found"<<endl;
	return 0;
}

