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
    int n,i,t,j,l;
    char a[65535],str[65535];
    gets(str);
    n=atoi(str);
    for(i=0;i<n;i++)
        {
            gets(a);
            l=strlen(a);
            if((a[0]=='_')||(a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z'))
                {
                    for(j=1;j<l;)
                        {
                            
                            if((a[j]<='9'&&a[j]>='0')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]=='_'))
                                {j++;}
                            else
                                {
                                    
                                    printf("0\n");
                                    break;
                                }
                        }
                    if(j==l)
                        printf("1\n");
                }
            else
                printf("0\n");
        }
    getchar();
}
