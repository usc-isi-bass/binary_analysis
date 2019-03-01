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
     char a[2000];
     int b=1;
     int i,j;
     scanf("%s",a);
     for(i=0;a[i]!='\0';i++)
     {
                        if(a[i]>='a'&&a[i]<='z')
                        a[i]=a[i]-32;
     }
     for(j=0;a[j]!='\0';j++)
     {
                        if(a[j]==a[j+1])
                        b=b+1;
                        else
                        {
                            printf("(%c,%d)",a[j],b);
                            b=1;
                        }
     }
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
     
}