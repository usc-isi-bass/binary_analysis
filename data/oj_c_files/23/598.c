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


main()
{
      char c;int flag=1; 
      char word[100][100];
      int i=0,j=0,count=0; 
      while ((c=getchar())!='\n')
      {
            if (c==' '&&flag==1){flag=0;word[i][j]='\0';i++;j=0;count++;} 
            if (c!=' '&&c!='\n') {flag=1;word[i][j]=c;j++; } 
      } 
      
      for (int t=count;t>=0;t--){if(t>0)printf("%s ",word[t]);else printf("%s",word);} 
          
        
     
} 
