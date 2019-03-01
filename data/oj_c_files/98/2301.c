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
  int n;
  int i,j;
  int k;
  int end=0;;
  scanf("%d",&n);
  char dz[50];
  for(i=0;i<n;i++)
  {
     for (i = 0; i < n; i++) {   
    scanf("%s", dz);    
    k = strlen(dz);    
  
    if (end + k +1> 80) {
        printf("\n");       
        end = 0;             
    }
    else if (end > 0) {       
        printf(" ");        
        end++;               
    }
    printf("%s", dz);      
    end += k;            
}
  }
return 0;
}
