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

int rui(int y,int m){
  if((y%4==0&&y%100!=0)||(y%400==0)&&m==2)
    return 1;
   else return 0;
 }
int main(){
  int d=0,y,m,r,i;
  int pp[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   cin>>y>>m>>r;
   for(i=1;i<m;i++)
     d=d+pp[i]+rui(y,i);
    d=d+r;
    cout<<d<<endl;
   return 0;
}