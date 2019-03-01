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

/* ???
 * ?????
 */

int main(){
    char a[101];
    cin.getline(a,101);
    int l=strlen(a);
    int i,k;
    for(i=0;i<l;i++){
    if(a[i]==' '){
        if(a[i+1]==' '){
        for(int k=i;k<l-1;k++)
       {a[k]=a[k+1];}
            l--;i--;a[l]='\0';}
    }
    }
    cout<<a;
  return 0;}

