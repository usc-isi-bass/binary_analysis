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
      int n;
      scanf ("%d",&n);
      int i,j;
      char a[55][32];
      for (i=0;i<n;i++)
      {
          scanf ("%s",a[i]);
      }
      for (i=0;i<n;i++)
      {
          int len=strlen(a[i]);
          int lenf=0;
          if (a[i][len-3]=='i'&&a[i][len-2]=='n'&&a[i][len-1]=='g') lenf=len-3;
          else if ((a[i][len-2]=='e'&&a[i][len-1]=='r')||(a[i][len-2]=='l'&&a[i][len-1]=='y')) lenf=len-2;
          for (j=0;j<lenf;j++)
          {
              printf ("%c",a[i][j]);
          }
          printf ("\n");
      }
}