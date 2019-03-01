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


main(){
       char *p;
       int i,len;
       p=(char*)malloc(30);
       gets(p);
       len=strlen(p);
       for(i=0;i<len;i++){
           if(*(p+i)>=48&&*(p+i)<=57){
               printf("%c",*(p+i));
           }
           else if((*(p+i-1)>=48&&*(p+i-1)<=57)||*(p+i+1)=='\0'){
               printf("\n");
           }
       }
       printf("\n");
}
