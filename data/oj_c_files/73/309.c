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
	int a[5][5],max[5]={0},b[5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]>max[i])max[i]=a[i][j];
			}//??????????????????max[i]?? 
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(a[i][j]==max[i])b[i]=j;
				}//???????????????b[i]?? 
			}
			int andian=0;//?andian?????????? 
			for(int x=0;x<5;x++){//??x????????? 
				int num=0;//??num??? 
				for(int i=0;i<5;i++){
					if( (i!=x) && (a[i][b[x]]<=max[x]) )break;
						else  num++;//?????????max[x]??num++?i==x???num++ 
					}
					if(num==5){
						andian=1; 
						cout<<x+1<<" "<<b[x]+1<<" "<<max[x];//???????????? 
						}
				}
				if(andian==0)cout<<"not found";
				
				return 0;
	}
