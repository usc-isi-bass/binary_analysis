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
int i,j,g,a=0;
char m[301],n[27]="abcdefghijklmnopqrstuvwxyz";
cin>>m;
for(j=0;j<26;j++){
    g=0;              
    for(i=0;i<strlen(m);i++){
        if(m[i]==n[j]){
            g++;}}
    if(g>0){                   
    cout<<n[j]<<'='<<g<<endl;
a++;}}                                                                         if(a==0) cout<<"No"<<endl;                    

return 0;
}
