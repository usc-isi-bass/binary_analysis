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

int plalindrome(char *p){//?????????
	int n,i;
	for(n=0;*(p+n)!=0;n++);
	for(i=0;i<n/2;i++)
		if(*(p+i)!=*(p+n-1-i))break;
	if(i<n/2)return 0;//??0????
	return 1;//??1???
}
int main(){
	int i,j,k,n;
	char string[501],substring[501];
	cin.getline(string,501);
	for(n=0;string[n]!=0;n++);
	for(i=2;i<=n;i++)//???????????  i??????
		for(j=0;j<=n-i;j++){//j????????
			for(k=0;k<i;k++)substring[k]=string[j+k];
			substring[k]=0;
			if(plalindrome(substring))cout<<substring<<endl;
		}
	return 0;
}