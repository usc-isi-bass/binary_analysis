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

int main(){
	char array[1000000],temp;
	int n,i,j,k,len,account=0;
	cin >> n;
	for(i=0;i<n;i++){  //n???
		cin >> array;  //?????
		len=strlen(array);  //????
		for(j=0;j<len;j++){  //??????
			if(array[j]=='0') continue;  //???0?????
			if(array[j]!='0'){  //???0
				temp=array[j];
				for(k=j+1;k<len;k++){  //?????????
					if(temp==array[k]){  //??
						array[k]='0';   //?????0
						array[j]='0';
					}}}}
			for(j=0;j<len;j++){//????
				if(array[j]!='0') {  //?????0???
					cout << array[j] << endl;  //??
					account ++;  //?????
					break; //??
				}}
			if(account == 0) cout << "no" << endl;  //????0???no
			account=0;  //?????0

		}
	return 0;
}
