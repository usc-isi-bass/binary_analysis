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
int flag=0;
int n;
cin>>n;
int w[100001];
for(int i=0;i<n;i++)
cin>>w[i];
int k;
cin>>k;
for(int i=0;i<n;i++)if(w[i]!=k){
if(flag)cout<<' ';else flag=1;
cout<<w[i];
}
cout<<endl;
return 0;
}