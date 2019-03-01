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

int main()//????????????????
{
    char a[1000];//??????? 
    gets(a);//?? 
    int i=0,j,n;//n??? 
    n=strlen(a);
    for(i=0;i<n;i++)
    {
                   while(a[i]==' '&&a[i-1]==' ')//???????????? 
                   {
                              for(j=i+1;j<n;j++)//???? 
                                 a[j-1]=a[j];
                              a[n-1]='\0';
    }                          }
    cout<<a;//?????????                       
    getchar();
    getchar();                  
    return 0;
}
    
