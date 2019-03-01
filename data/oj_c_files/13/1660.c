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
int n,k,w[200];
cin>>n;memset(w,0,sizeof(w));
for(int i=0;i<n;i++){
cin>>k;
if(!w[k]){
if(i)cout<<' ';
w[k]=1;
cout<<k;
}
}
return 0;
}
