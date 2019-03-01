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



char a[1000];
int b[1000];
int i,j;
main ()
{
     scanf("%s",a);
     for(i=0;a[i]!='\0';i++)
     {
                            if(a[i]>='a'&&a[i]<='z')
                            a[i]=a[i]-'a'+'A';
                            }
                            for(i=0;a[i]!='\0';)
                            {for(j=i;;j++)
                            {if(a[j]==a[i])
                            b[i]++;
                            if(a[j]!=a[i])
                            break;}
                            printf("(%c,%d)",a[i],b[i]);
                            i+=b[i];
                            }
    
return 0;}
