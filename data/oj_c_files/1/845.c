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

int cal; //??cal
int fac(int a,int x){ //a???????
if(x==1) { cal++; return 1; } //??x?i?? ????????????1
for(int i=2;i<=x;i++)
if(x%i==0&&i>=a) //??? ??????????
fac(i,x/i);}
int main(){
int n,b;
cin>>n;
while(n>0){
cal=0;
cin>>b;
fac(1,b);
cout<<cal<<endl;
n--;
}}