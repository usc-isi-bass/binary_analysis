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
    int i, j, n;                
    char s[1000][MAX+1];               
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {   
        scanf("%s", s[i]);  
	}
    for(i=0;i<n;i++){
        for (j = 0; s[i][j]; j++) { 
            if (!((s[i][j] == '_') ||     
                  (s[i][j] >= 'A' && s[i][j] <= 'Z') ||   
                  (s[i][j] >= 'a' && s[i][j] <= 'z') ||  
                  (s[i][j] >= '0' && s[i][j] <= '9' && j > 0)))
                                                
                break;           
        }
        printf(s[i][j] ? "no\n":"yes\n"); 
    }  
    return 0;
}