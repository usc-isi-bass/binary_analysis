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
 * 5.cpp
 *
 *  Created on: 2010-11-24
 *      Author: hanzhe
 */


int main(){//????
	int n;
	char a[81];
	cin>>n;         //????
	cin.getline(a,81);//?????
	while(n>0){        //???
		int g=0,i,na;  //g=1????
		cin.getline(a,81);//??
		na=strlen(a);     //??
		if((a[0]=='_')+((a[0]-'a'>=0)&&(a[0]-'z'<=0))+//???????_,a~z,A~Z?
				((a[0]-'A'>=0)&&(a[0]-'Z'<=0))==1)
			g=1;
		for(i=1;i<na;i++){          //??????????(?_,a~z,
			if((a[i]=='_')+((a[i]-'a'>=0)&&(a[i]-'z'<=0))+((a[i]-'A'>=0)&&(a[i]-'Z'<=0))+
					((a[i]-'0'>=0)&&(a[i]-'9'<=0))==1)
				g=g*1;
			else g=0;
		}
		if(g==1)cout<<"1"<<endl;
		else cout<<"0"<<endl;
		n--;
	}
	return 0;
}//????
