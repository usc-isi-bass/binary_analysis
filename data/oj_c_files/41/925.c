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



int a,b,c,d,e,A,B,C,D,E;

int main(){
    for(a=1;a<=5;a++)
                     for(b=1;b<=5;b++)
                                      for(c=1;c<=5;c++)
                                                       for(d=1;d<=5;d++)
                                                                        for(e=1;e<=5;e++)
                                                                                         if((e!=2)&&(e!=3)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e)){
                                                                                                                                                                                           A=(e==1);
                                                                                                                                                                                           B=(b==2);
                                                                                                                                                                                           C=(a==5);
                                                                                                                                                                                           D=(c!=1);
                                                                                                                                                                                           E=(d==1);
                                                                                                                                                                                           if((A==1)&&(B==1)&&(C==0)&&(D==0)&&(E==0)&&( ((a==1)&&(b==2)) || ((a==2)&&(b==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==1)&&(B==0)&&(C==1)&&(D==0)&&(E==0)&&( ((a==1)&&(c==2)) || ((a==2)&&(c==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==1)&&(B==0)&&(C==0)&&(D==1)&&(E==0)&&( ((a==1)&&(d==2)) || ((a==2)&&(d==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==1)&&(B==0)&&(C==0)&&(D==0)&&(E==1)&&( ((a==1)&&(e==2)) || ((a==2)&&(e==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==1)&&(C==1)&&(D==0)&&(E==0)&&( ((c==1)&&(b==2)) || ((c==2)&&(b==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==1)&&(C==0)&&(D==1)&&(E==0)&&( ((d==1)&&(b==2)) || ((d==2)&&(b==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==1)&&(C==0)&&(D==0)&&(E==1)&&( ((e==1)&&(b==2)) || ((e==2)&&(b==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==0)&&(C==1)&&(D==1)&&(E==0)&&( ((d==1)&&(c==2)) || ((d==2)&&(c==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==0)&&(C==1)&&(D==0)&&(E==1)&&( ((c==1)&&(e==2)) || ((c==2)&&(e==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           if((A==0)&&(B==0)&&(C==0)&&(D==1)&&(E==1)&&( ((d==1)&&(e==2)) || ((d==2)&&(e==1)) ))
                                                                                                                                                                                                                                     printf("%d %d %d %d %d\n",a,b,c,d,e);
                                                                                                                                                                                           }                                                                                                                                                                                                                                                 
    return 0;
}