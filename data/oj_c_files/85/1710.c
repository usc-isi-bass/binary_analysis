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
    int i, j, n,a;                 /* ?????? */
    char s[MAX+1];               /* ?????? */
    scanf("%d", &n);             /* ???????????n */
    for (i = 0; i < n; i++) {    /* ??n? */
        scanf("%s", s);          /* ????????????? */
        for (j = 0;s[j]; j++) { /* ??????????? */
            a=strlen(s);
			if (!((s[j] == '_') ||     /* ???“_” */
                  (s[j] >= 'A' && s[j] <= 'Z') ||   /* ???? */
                  (s[j] >= 'a' && s[j] <= 'z') ||   /* ???? */
                  (s[j] >= '0' && s[j] <= '9' && j > 0))){
                printf("no\n");                                /* ?????? */
                break; 
			}else if(j==0&&s[j]>='0'&&s[j]<='9'){
				printf("no\n");
			    break;
			}else if(j==a-1){
			    printf("yes\n");
			}
        } 
	}
    return 0;
}
