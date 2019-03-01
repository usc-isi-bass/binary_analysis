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



int main(void)
{
        char *exp=(char*)malloc(sizeof(char)*MAX_LEN);
        int *res=(int*)malloc(sizeof(int)*MAX_LEN);
        while(gets(exp))
        {
                int cur=0,pt=0,len=strlen(exp);
                for(int i=0;i!=MAX_LEN;++i)
                        res[i]=-1;
                for(;cur!=len;++cur)
                {
                        if(exp[cur]!='('&&exp[cur]!=')')
                                res[cur]=0;
                        if(exp[cur]==')')
                        {
                                for(pt=cur-1;pt>=0;--pt)
                                {
                                        if(exp[pt]=='('&&res[pt])
                                        {
                                                res[pt]=0;
                                                res[cur]=0;
                                                break;
                                        }
                                }
                        }
                }
                puts(exp);
                for(int i=0;i!=len;++i)
                {
                        if(exp[i]=='('&&res[i]==-1)
                                res[i]=1;
                        else if(exp[i]==')'&&res[i]==-1)
                                res[i]=2;
                        switch(res[i])
                        {
                        case 0:
                                putchar(' ');
                                break;
                        case 1:
                                putchar('$');
                                break;
                        case 2:
                                putchar('?');
                                break;
                        }
                }
                printf("\n");
        }
        return 0;
}