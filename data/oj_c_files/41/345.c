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
 * ????.cpp
 *
 *  Created on: 2011-11-4
 *      Author: ???
 */

int main(){
	int a,b,c,d,e;
	for(a=1;a<6;a++)//????
		for(b=1;b<6;b++){
			if(b!=a){
				for(c=1;c<6;c++){
					if(c!=a&&c!=b){
						for(d=1;d<6;d++){
							if(d!=a&&d!=b&&d!=c){
								e=15-a-b-c-d;
								if((e!=2)&&(e!=3)&&((e==1)+(a>2)==1)&&((b==2)+(b>2)==1)&&((a==5)+(c>2)==1)&&((c!=1)+(d>2)==1)&&((d==1)+(e>2)==1)){
									//??????????????>2???1
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
									return 0;
								}
							}
						}
					}
				}
			}
		}
	return 0;
}