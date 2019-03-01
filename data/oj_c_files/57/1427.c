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
int n,i,j,g;
char m[50];
cin>>n;
for(i=0;i<n;i++){
                 cin>>m;
                 g=strlen(m);
                 if(m[g-1]=='r'||m[g-1]=='y'){
                 for(j=0;j<g-2;j++){
                 cout<<m[j];}
                 cout<<endl;}
                 else if(m[g-1]=='g'){
                      for(j=0;j<g-3;j++){
                      cout<<m[j];}
                      cout<<endl;}}

return 0;
}
