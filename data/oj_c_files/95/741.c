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
 * 10.cpp
 *  Created on: 2010-11-7
 *      Author: lulan
 *      ?????????????
 */


int main(){
	int i;//????
	char a[100],b[100];//??????
	cin.getline(a,81);//?????a
	cin.getline(b,81);//?????b
	   for(i=0;i<81;i++){
          if(a[i]<='Z'&&a[i]>='A')
			a[i]+=32;
		else continue;//???????????????
	}
	   for(i=0;i<81;i++){
          if(b[i]<='Z'&&b[i]>='A')
			b[i]+=32;
		else continue;
	   }
	if(strcmp(a,b)>0)
		cout<<">"<<endl;
	else if(strcmp(a,b)==0)
		cout<<"="<<endl;
	else if(strcmp(a,b)<0)
		cout<<"<"<<endl;//????
	return 0;//?????
}
