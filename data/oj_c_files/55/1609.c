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
int a,b,x=0,i,l;
char s[50];
cin>>a>>s>>b;
for (i=0;s[i]!=0;i++)
if(s[i]<='9') x=x*a+s[i]-48;
else if(s[i]<='Z') x=x*a+s[i]-55;
else x=x*a+s[i]-87;
for (l=0;x!=0;l++){
i=x%b;
if(i<10) s[l]=i+48;
else s[l]=i+55;
x/=b;
}
for (i=l-1;i>=0;i--) cout<<s[i];
if(l==0) cout<<0;
return 0;
}