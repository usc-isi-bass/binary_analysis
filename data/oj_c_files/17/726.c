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

char p[200],q[200];
int main(){
while(scanf("%s",&p)!=EOF){
memset(q,' ',sizeof(q));
int l=strlen(p);
q[l]=0;
int t=0;
for(int i=0;i<l;i++){
if(p[i]=='(')t++;
else if(p[i]==')'){
if(t>0)t--;else q[i]='?';
}
}
t=0;
for(int i=l-1;i>=0;i--){
if(p[i]==')')t++;
else if(p[i]=='('){
if(t>0)t--;else q[i]='$';
}
}
cout<<p<<endl<<q<<endl;
}
return 0;
}