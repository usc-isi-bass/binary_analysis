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

int main()
{
	char str[100];                 //???????100?????
	int n,i,a[100]={0};            //??????n,i ?????a[100]
	cin.get(str,100);              //?????
	n=strlen(str);                 //?????
	for(i=1;i<n;i++){
		if(str[i]==' '&&str[i-1]==' '){ 
			a[i]=1;                //???? ????????  ????????????1
		}}
	for(i=0;i<n;i++){
		if(a[i]==0)
			cout<<str[i];}        //???????0???
	return 0;                     //??0
}