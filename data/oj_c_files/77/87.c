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
int n,sp,st[100]={0};
char ch,boy;
scanf("%c",&boy);
for(n=sp=1;sp>0;n++)
{
     scanf("%c",&ch);
     if(ch==boy){
         st[sp]=n;
         sp++;
         }
     else{
         sp--;
        printf("%d %d\n",st[sp],n);}
 }
    return 0;
}
