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

int main(){
	int a,b,c,d,e,iTruth[6];	//???????abcde????????????iTruth??????????????
	for (a=1;a<=5;a++){	//?????????????????????????????e??????????
		for (b=1;b<=5;b++){
			if (a!=b){
				for (c=1;c<=5;c++){
					if ((c!=a)&&(c!=b)){
						for (d=1;d<=5;d++){
							if ((d!=a)&&(d!=b)&&(d!=c)){
								for (e=1;e<=5;e++){
									if ((e!=a)&&(e!=b)&&(e!=c)&&(e!=d)&&(e!=2)&&(e!=3)){
										iTruth[a]=(e==1);	//?????????????????????
										iTruth[b]=(b==2);
										iTruth[c]=(a==5);
										iTruth[d]=(c!=1);
										iTruth[e]=(d==1);
										if ((iTruth[1]+iTruth[2]==2)&&(iTruth[3]+iTruth[4]+iTruth[5]==0)){	//???????????
											cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;	//??????
											a=b=c=d=e=6;	//????
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
