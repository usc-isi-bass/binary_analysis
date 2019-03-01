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
 * 4.1.cpp
 *
 *  Created on: 2011-1-8
 *      Author: ???
 *        ??? ????
 */



int main(){
	char c[31],str[31];
	cin.getline(c,31);
	int m=strlen(c);
	for(int i=0;i<m;i++){
		if(c[i]=='0')//??0?????
			if(c[i+1]!='0'){
				cout<<0<<endl;
				continue;
			}
		if(!(c[i]>='1'&&c[i]<='9'))//??????
			continue;
		else{
			int j;
			for(j=0;c[i]>='0'&&c[i]<='9';i++,j++)//?????????
				str[j]=c[i];
			str[j]=0;
			cout<<str<<endl;
		}
	}
	return 0;
}
