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





void dna()

{

     int i;

     char str[255];

     gets(str);

     for(i=0;i<strlen(str);i++)

       {

       if(str[i]=='A')

         str[i]='T';

       else if(str[i]=='T')

         str[i]='A';

       else if(str[i]=='C')

         str[i]='G';

       else if(str[i]=='G')

         str[i]='C';

       }

     puts(str);

}




main()

{

      int a,i;

      scanf("%d",&a);

      getchar();

      for(i=0;i<a;i++)

        dna();

} 

