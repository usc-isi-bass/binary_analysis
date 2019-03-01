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

main ()
{
     int i,j,x,y=0,z,a,b,q;
     char c[40];
     scanf ("%d %s %d",&a,c,&b);
     i=strlen (c);
     if (c[0]=='0')
     printf ("0\n");
     else 
     {
          for (j=0;j<i;j++)
                  {
                     if (c[j]>='A'&&c[j]<='Z')
                         x=c[j]-'A'+10;
                     else 
                      {
                       if (c[j]>='a'&&c[j]<='z')
                          x=c[j]-'a'+10;
                       else 
                          x=c[j]-'0';
                       }
                           y=y*a+x;
                  }
             
          char k[40];
          for (i=0,q=y;q!=0;i++)
          {
              k[i]=q%b;
              q=q/b;
          }
             k[i]='0';
             char h[i];
             for (j=0;j<i;j++)
                {
                    if (k[j]>9)
                         h[i-j-1]=k[j]+'A'-10;
                    else 
                         h[i-j-1]=k[j]+'0';
                    }
              for (j=0;j<i;j++)
              printf ("%c",h[j]);       
              
}
    getchar ();
    getchar ();         
}    
     
