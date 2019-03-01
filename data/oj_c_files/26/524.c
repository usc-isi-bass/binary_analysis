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
 * guolvduoyudekongge.cpp
 *
 *  Created on: 2011-1-8
 *      Author: dyj
 */


int main(){
	char str[100];
	int n=0,i,j;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			for(j=i;str[j]==' ';j++)
				n++;
			for(;str[j-1]!='\0';j++)
				str[j-n+1]=str[j];
			n=0;
		}
	}
	cout<<str<<endl;
	return 0;
}
