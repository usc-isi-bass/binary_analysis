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
 * GUOLV.cpp
 *
 *  Created on: 2010-11-19
 *      Author: 10211
 */

int main(){
	char a[101];
	cin.getline(a,101);
	int la;
	la=strlen(a);
	for(int i=0;i<la;i++){
		if(a[i]==' ')
			if(a[i+1]==' '){
				for(int j=i;j<la;j++)
					a[j]=a[j+1];
				la--;
				i--;
			}

	}
	for(int i=0;i<la;i++)
	cout<<a[i];
	return 0;
}
