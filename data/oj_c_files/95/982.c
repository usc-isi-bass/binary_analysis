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
 * 15.cpp
 *Created on: 2011-10-26
 *Author: gaokai
 *??????????????
 */


int main(){
	int i;                         //??????
	char a[80],b[80];              //a????????,b????????
	gets(a);
	gets(b);                       //?????????
	for(i=0;i<(int)strlen(a);i++)
		a[i] = tolower(a[i]);      
	for(i=0;i<(int)strlen(b);i++)
		b[i] = tolower(b[i]);     //????????????
	if(strcmp(a,b)>0)
		cout<<">"<<endl;
	if(strcmp(a,b)<0)
		cout<<"<"<<endl;
	if(strcmp(a,b)==0)
		cout<<"="<<endl;          //??????????
	return 0;
}
