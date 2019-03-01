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
     char s[100];
     gets(s);
     
     char ss[100];
      ss[0]=s[0];
     int i,k=1;
     for(i=1;s[i]!='\0';i++)
            if(s[i]!=' '||s[i]==' '&&s[i-1]!=' ')ss[k++]=s[i];
          ss[k]='\0'; 
     puts(ss);
     getchar(); 
}
