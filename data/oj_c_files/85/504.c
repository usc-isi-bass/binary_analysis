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
    int n;
    char sr[100][100];
    int i,l,j,sum[100];
    scanf("%d",&n);
 

    for(i=0;i<n;i++) scanf("%s",sr[i]);
    for(i=0;i<n;i++){
                     sum[i]=0;
                     l=strlen(sr[i]);
                     if((sr[i][0]>='A'&&sr[i][0]<='Z')||(sr[i][0]>='a'&&sr[i][0]<='z')||sr[i][0]=='_'){
                                                                                                       for(j=1;j<l;j++){
                                                                                                                        if((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||sr[i][j]=='_'||(sr[i][j]>='0'&&sr[i][j]<='9')) sum[i]=1;
                                                                                                                        else{
                                                                                                                             sum[i]=0;
                                                                                                                             break;
                                                                                                                             }
                                                                                                                        }
                                                                                                                       
                                                                                                       }
                      if(sum[i]==0) printf("no\n");
                      else if(sum[i]==1) printf("yes\n");
                      }                 
    
    return 0;
}
