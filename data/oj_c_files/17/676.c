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
    int i,n,j;
    char a[500]={0},b[500]={0};
	scanf("%d",&n);
     for(j=1;j<=n;j++)
	 {
    scanf("%s",a);
        printf("%s\n",a);
        i = 0;
        while(a[i]!='\0'){
            if(a[i]=='('){
                b[i]='$';
            }else if(a[i]==')'){  
                int k;
                for(k=i-1;k>=0;k--){
                    if(b[k]=='$'){
                        b[i]=b[k]=' ';
                        break;
                    }
                }
                if(k==-1)
                    b[i]='?';
            }else{
                b[i]=' ';
            }  
            i++;
        }
  
        printf("%s",b);
        printf("\n");
        memset(b, 0, 500);
        memset(a, 0, 500);
        fflush(stdin);
    }
    return 0;
}