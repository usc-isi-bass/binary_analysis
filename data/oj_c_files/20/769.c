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
    
    char a[20],b[4];
    while (cin>>a>>b)
    {
          char *pa,*pb=b,*pmax=a; 
          for (pa=a; pa!=&a[strlen(a)]; pa++)  
              if (*pa>*pmax) pmax=pa;   //??ASCII????????pmax?????? 
          for (pa=&a[strlen(a)]; pa!=pmax; pa--)  //?pmax??????????? ?b???? 
              *(pa+3)=*pa;
          for (pa=pmax+1,pb=b;pb!=&b[3];pa++,pb++)  //?b???pmax??????? 
              *pa=*pb;
          pa=a;
          cout<<pa<<endl;
    }
    

return 0;
}
