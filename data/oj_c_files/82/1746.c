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
    int n,i,m=0,a,b,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
                        scanf("%d %d",&a,&b);
                        if(a>=90&&a<=140&&b>=60&&b<=90){
                                                    m=m+1;
                                                    }
                        else{
                             if(m>max){ max=m;}
                            
                             m=0;
                             }                            
                                                    
                        
                        
                        }
  if(m>max){ max=m;}                      
  if(max==0){printf("%d\n",m);}
  
  
  else{printf("%d\n",max);}
	
  return 0;
}
