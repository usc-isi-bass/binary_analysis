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
 * 111230_Skipping.cpp
 *
 *  Created on: 2011-12-30
 *      Author: Alfalfa
 */
int main(){
	int n;
	cin>>n;
	while(n){
		n--;
		int miss,all=60,time=0,allmiss=0,flag=0,all1;
		cin>>miss;
		while(miss){
			miss--; allmiss++;
			int num;
			cin>>num;
			time=num+allmiss*3;
			all=num;
			if(time>=63&&flag==0){
				all1=60-(allmiss-1)*3;
				flag=1;
			}
			else if(time>=60&&flag==0){
				all1=all;
				flag=1;
			}
		}
		if(flag==1) cout<<all1<<endl;
		else cout<<60-allmiss*3<<endl;
	}
}
