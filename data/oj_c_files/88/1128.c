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

int main()
{
 char a[100];
 cin.get(a,33);
 int i=0;
 for(i=0;i<31;i=i+1)
   {    
     if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||
     a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
           if(a[i+1]=='0'||a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='5'||
           a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
           {cout<<a[i];}
           else 
           {cout<<a[i]<<"\n";}
        }
   }  
return 0;
}
