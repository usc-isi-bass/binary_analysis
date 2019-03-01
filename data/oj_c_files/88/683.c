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
 * ???8.cpp
 * Created on: 2012-12-12
 * Author: ???
 * ??:????
 */
int main(){
	char str[40];  //??????
	gets(str);     //?????
	char *p=str;         //????
	int len,i,k=0;          //????
	len=strlen(str);    //????
	if(len==1){
		if(*(p+0)>='0' && *(p+0)<='9')
			cout<<*(p+0);
	}
	for(i=0;i<len-1;i++)  //????
	{
        if(*(p+i)>='0' && *(p+i)<='9') //??????? ???
        	{
        	cout<<*(p+i);k=1;
             if(*(p+i+1)<'0' || *(p+i+1)>'9') //??????? ???
        	 {cout<<endl;k=0;}
        	}
	}
	if(k==1)      //???????????
		cout<<*(p+len-1)<<endl; //??????
	else if(*(p+len-1)>='0' && *(p+len-1)<='9')
		cout<<*(p+len-1);
 return 0;  //????
}