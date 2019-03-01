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
                  int n,i,m;
                  char a[1];
                  gets(a);
                  n=atoi(a);
                  for(i=0;i<n;i++)
                  {
                                  char str[80];
                                  gets(str);
                                  m=strlen(str);
                                  int p=0;
                                  
                                  if( ( (str[0]>='a')&&(str[0]<='z') ) || ( (str[0]>='A')&&(str[0]<='Z') ) || (str[0]=='_') )
                                  {
                                          for(int k=1;k<m;k++)
                                          {
                                                  if( ( (str[k]>='a')&&(str[k]<='z') ) || ( (str[k]>='A')&&(str[k]<='Z') ) || (str[k]=='_') || ( (str[k]>='0')&&(str[k]<='9') ) )
                                                  ;
                                                  else 
                                                  p=1;       
                                          }
                                  }
                                  
                                  else
                                  p=1;
                                  if(p==0)
                                  printf("1\n");
                                  else
                                  printf("0\n");
                  }
}

