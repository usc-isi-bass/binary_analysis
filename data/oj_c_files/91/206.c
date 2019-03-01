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
      char *give;int num;int i,j,k;int j1,k1;char *head;
      give=(char*)malloc(100*sizeof(char));
      head=(char*)malloc(100*sizeof(char));
      gets(give);
      strcpy(head,give);
      num=strlen(give);
      char *out;
      out=(char*)malloc(100*sizeof(char));
      for(i=0;i<num-1;i++)
      {     
                         
                        j=(int)*(give+i)-48;
                        k=(int)*(give+1+i)-48;
                        *(out+i)='a'+j+k-1;
                        printf("%c",*(out+i));
      }
      j1=(int)*(head)-48;
      k1=(int)*(head+num-1)-48;
      *(out+i)='a'+j1+k1-1;
      printf("%c",*(out+i));
      
      }
