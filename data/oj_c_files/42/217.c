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
	int t;   //?????t
	cin>>t;    //??t??
	const int n=t;  //??????n(????????),???t
	int a[n];   //?????a,??n???
	int i,j,k=0;  //??????i,j;??????????????k
	for(i=0;i<n;i++)  //??n???,?????a?
		cin>>a[i];
	int num;   //???????
	cin>>num;   //????????
	for(i=0;i<n;i++){  //??,????0???n-1
		if(a[i]==num){   //???????????????,??????
			k++;    //???????
			for(j=i;j<n-1;j++)
				a[j]=a[j+1]; //???????????????,?????
			a[j]=0;   //????????0,???????????
			i--;  //i??,?????????
			}
		}
	for(i=0;i<n-k-1;i++)
		cout<<a[i]<<" ";
	cout<<a[i];//?????????????
	return 0;
}