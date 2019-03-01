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
 * guolv.cpp
 *
 *  Created on: 2011-1-8
 *      Author: qaj
 */
int main(){
	char ch[100];
	cin.getline(ch,100);
	int l=strlen(ch);
	for(int i=0;i<l;i++){
		if((ch[i]==' ')&&(ch[i+1]==' ')){
			for(int j=i;j<l;j++){
				ch[j]=ch[j+1];
			}
			i--;
		}
	}
	cout<<ch;
	return 0;
}