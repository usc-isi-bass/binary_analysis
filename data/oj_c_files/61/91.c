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

int febonaqi(int a){
if(a==1) return 1;
else if(a==2) return 1;
else return febonaqi(a-1)+febonaqi(a-2);
}
int main(){
int n;
cin>>n;
while(n>0){
int s;
cin>>s;
cout<<febonaqi(s)<<endl;
n--;
}
return 0;
}