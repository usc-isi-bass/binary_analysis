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
 * 1000062703_30.cpp
 *
 *  Created on: 2010-9-26
 *      Author: ??
 */
int main(){
	int n,i,flag;
	cin>>n;
	cin.get();
	while(n>0){
		char z[81];
		cin.getline(z,81);
		flag=1;
		    if(z[0]=='_'||(z[0]>='a'&&z[0]<='z')||(z[0]>='A'&&z[0]<='Z')){
			    for(i=1;i<strlen(z);i++){
				    if((z[i]!=' ')&&!(z[i]>='!'&&z[i]<'0')&&(z[i]='_'||(z[i]>='a'&&z[i]<='z')||(z[i]>='A'&&z[i]<='Z')||(z[i]>='0'&&z[i]<='9')))
					    continue;
				    flag=0;
			}
			    if(flag) cout<<1<<endl;
			    else cout<<0<<endl;
		}
		    else cout<<0<<endl;
		    n--;
	}
	return 0;
}


