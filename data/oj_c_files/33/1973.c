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
    int n,i,m,len;
    char a[256];
    scanf("%d",&n);
    for(m=0;m<n;m++){
                     scanf("%s",a);
                     len=strlen(a);
                     for(i=0;i<len;i++){
                                        switch(a[i]){
                                                     case 'A':{a[i]='T';break;}
                                                     case 'T':{a[i]='A';break;}
                                                     case 'C':{a[i]='G';break;}
                                                     case 'G':a[i]='C';
                                                     }
                                                     }
                     for(i=0;i<len;i++) printf("%c",a[i]);
                     printf("\n");
                     }
                                                     
    
                     

  return 0;
}