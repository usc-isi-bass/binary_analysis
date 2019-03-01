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
      char a[1000];
      int l; 
      scanf("%s",a);
      l=strlen(a);
      int t=1; 
      for(int i=0;i<l;i++)
      {
              if(a[i]==a[i+1]||(a[i]+'a'-'A')==(a[i+1])||(a[i]+'A'-'a')==(a[i+1]))
              t++;
              else
              {
                  if(a[i]>='A'&&a[i]<='Z') 
                  printf("(%c,%d)",a[i],t); 
                  else
                  printf("(%c,%d)",a[i]-'a'+'A',t); 
                  t=1; 
              } 
      } 
      getchar();getchar(); 
      
}
