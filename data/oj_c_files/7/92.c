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


int main(int argc, char *argv[])
{
    char  s[260],sub[260],re[260];
    int i, len1, len2, m, xxx,yyy=0;
    gets(s);
    gets(sub);
    gets(re);
    len1=strlen(s);
    len2=strlen(sub);
    
     for(i=0;i<len1-len2+1;i++){
                                xxx=0;                
                                for(m=0;m<len2;m++){
                                                     if(s[i+m]==sub[m]){
                                                                          xxx++;
                                                                          }
                                                    }
                                if(xxx==len2){
                                            for(m=0;m<len2;m++){
                                                                s[i+m]=re[m];
                                                                yyy++;
                                                                if(yyy==len2) break;
                                                                }
                                if(yyy==len2)  break;
                                                                }
                                                                }
     
  
     printf("%s",s);
     
    return 0;
}
