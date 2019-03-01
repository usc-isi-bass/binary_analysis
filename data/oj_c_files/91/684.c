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
	char cha,a[500],*pointa=NULL;
	pointa=a;  //????????
	int len,i;
	cin.getline(a,500);  //?????
	len=strlen(a);  //????
	for(i=0;i<len-1;i++){   //??
		cha=(char)((int)*(pointa+i)+(int)*(pointa+i+1));  //??????
		cout << cha;  //??????
	}
	cha=(char)((int)*(pointa+len-1)+(int)*pointa);  //????????
	cout << cha << endl;  //???????
	return 0;  //????????0
}
