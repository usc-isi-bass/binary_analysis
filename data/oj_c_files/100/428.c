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
    char s[300],a[27]="abcdefghijklmnopqrstuvwxyz",b[300],*x,*y;
    int n[26],i,j=0;
    cin>>s;
    for(i=0,x=a;*x!='\0';x++,i++){
          
          for(y=s,n[i]=0;*y!='\0';y++){if(*y==*x){n[i]++;}}
          if(n[i]>0){printf("%c=%d\n",*x,n[i]);}
          j+=n[i];
          }
    if(j==0)cout<<"No";                       
    
    return 0;
             }