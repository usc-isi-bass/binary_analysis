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
    int n,u[100],v[100];
    float a[100],b[100],t,s,r;
    scanf("%d",&n);
	t=0.0;
    s=0.0;
    for(int i=0;i<=(n-1);i++){
            scanf("%d ",&u[i]);
            s=s+u[i]*(1.0);
            }
    for(int i=0;i<=(n-1);i++){
            scanf("%d ",&v[i]);
			}
    for(int i=0;i<=(n-1);i++){
		if((v[i]>=90)&&(v[i]<=100)){
                                    a[i]=4.0;}    
                                    else if((v[i]<=89)&&(v[i]>=85)){
                                         a[i]=3.7;}
                                         else if((v[i]<=84)&&(v[i]>=82)){
                                         a[i]=3.3;}
                                         else if((v[i]<=81)&&(v[i]>=78)){
                                         a[i]=3.0;}
                                         else if((v[i]<=77)&&(v[i]>=75)){
                                         a[i]=2.7;}
                                         else if((v[i]<=74)&&(v[i]>=72)){
                                         a[i]=2.3;}
                                         else if((v[i]<=71)&&(v[i]>=68)){
                                         a[i]=2.0;}
                                         else if((v[i]<=67)&&(v[i]>=64)){
                                         a[i]=1.5;}
                                         else if((v[i]<=63)&&(v[i]>=60)){
                                         a[i]=1.0;}
                                         else if((v[i]<60)){
                                         a[i]=0.0;}
										}
    for(int i=0;i<=(n-1);i++){
            b[i]=u[i]*1.0*a[i];
            t=t+b[i];
            }
            r=t/s;
    printf("%.2f",r);
	return 0;
    }
