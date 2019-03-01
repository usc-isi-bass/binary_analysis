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
    int z,q,s,l;
    int a1;
    for(z=1;z<=5;z++){
     for(q=1;q<=5;q++){
     if(q==z)
     continue;
     for(s=1;s<=5;s++){
         if((s==q)||(s==z))
             continue;          
     for(l=1;l<=5;l++){
          if((l==q)||(l==z)||(l==s))
             continue;              
       a1=((z+q)==(s+l))+((z+l)>(s+q))+((z+s)<(q));
       if(a1==3){
       cout<<"l "<<l*10<<endl<<"q "<<q*10<<endl<<"z "<<z*10<<endl<<"s "<<s*10<<endl;
                }
                }
                }
                }
                }
                return 0;
                }      
       
