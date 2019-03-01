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
    int n,m,i;
    cin>>n;
    m=(int)(log10(n)+1);
    if(n==0)
    cout<<0;
    else{
    for(i=1;i<=m;i++){
      cout<<n%10;
      n=(n-n%10)/10;
                      }
                      }
      return 0;
}