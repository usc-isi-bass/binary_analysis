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
	char arr[1001];
	cin >> arr;
	int i,len,temp=0;
	len=strlen(arr);
	for(i=0;i<len;i++){
		if((int)arr[i] > 92) arr[i] = (char)((int)arr[i]-32);
	}
	for(i=1;i<len;i++){
		if(arr[i] != arr[i-1]){
			cout << '(' << arr[i-1] << ',' << i-temp << ')';
			temp=i;
		}}
	cout << '(' << arr[len-1] << ',' << len-temp << ')' << endl; 
	return 0;
}
