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

int main ()
{
    int a,b,l;
    char n[50],d[50],m[50];
    scanf ("%d %s %d",&a,n,&b);
    if (n[0]=='0')
    printf ("0\n");
    else
    {
      l=strlen(n);
      int x=0;
      int j=0;
      for (int i=0;i<l;i++)
      {
        if (n[i]>='a' && n[i]<='z' )
        n[i]=n[i]-'a'+10;
        else if (n[i]>='A' && n[i]<='Z')
        n[i]=n[i]-'A'+10;
        else if (n[i]>='0' && n[i]<='9')
        n[i]=n[i]-'0';
        x=x*a+n[i];
      }
       for (;x!=0;j++)
       {
        d[j]=x%b;
        x=x/b;
       }
       d[j]='\0';
      for (int y=0;y<j;y++)
      {
        m[y]=d[j-y-1];
      }
       m[j]='\0';
      for (int z=0;z<j;z++)
      {
        if (m[z]<=9)
        m[z]=m[z]+'0';
        else 
        m[z]=m[z]+'A'-10;
      }
        printf ("%s",m); 
        getchar();
        getchar();
    }
}
    
        
    
