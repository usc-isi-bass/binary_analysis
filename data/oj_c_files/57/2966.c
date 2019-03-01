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


int main() {
    int n;
    scanf("%d",&n);
    
    char ip[n][40];
    char op[n][40];
    
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%s",ip[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        strcpy(op[i],ip[i]);
        for(j=0;j<strlen(ip[i]);j++)
        {
            
            if(ip[i][j]=='i' && ip[i][j+1]=='n' && ip[i][j+2]=='g' && ip[i][j+3]==0){op[i][j]=0;}
            else if(ip[i][j]=='e' && ip[i][j+1]=='r' && ip[i][j+2]==0 ){op[i][j]=0;}
            else if(ip[i][j]=='l' && ip[i][j+1]=='y' && ip[i][j+2]==0 ){op[i][j]=0;}
        }
        printf("%s\n",op[i]);
    }
    
    return 0;
}
