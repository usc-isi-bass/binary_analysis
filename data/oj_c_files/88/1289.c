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
    char aa[100];
    int i;
    i=0;
     gets(aa);
    while(aa[i]!='\0'){
      if(aa[i]<=57&&aa[i]>=48){
      cout<<aa[i];
      if(aa[i+1]>57||aa[i+1]<48)
      cout<<endl;
      }
      i++;
      }
      return 0;
      }
