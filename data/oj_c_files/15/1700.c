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
int n,c,r,x,t,r1,r2,c1,c2;
scanf("%d",&n);
int sz[n][n];
t=0;
for(r=0;r<n;r++){
          for(c=0;c<n;c++){
                 scanf("%d",&(sz[r][c]));
                 if(t==0&&sz[r][c]==0){
                         r1=r;
                         c1=c;
                         
                         
                         t=1;
                         } 
                 }
          }
t=0;
for(r=n-1;r>=0;r--){
           for(c=n-1;c>=0;c--){
                    scanf("%d",&(sz[r][c]));
                    if(t==0&&sz[r][c]==0){
                              r2=r;
                              c2=c;
                              t=1;
                              }
                    }
           }
	x=(r2-r1-1)*(c2-c1-1);
	printf("%d",x);
           return 0;

}

