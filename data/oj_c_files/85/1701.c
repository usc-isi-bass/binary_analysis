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

int main(){
char sz[100][20];
    int n,len[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%s",sz[i]);
      len[i]=strlen(sz[i]);
    }
    for(int i=0;i<n;i++){
      if((sz[i][0]>='A'&&sz[i][0]<='Z')||(sz[i][0]>='a'&&sz[i][0]<='z')||(sz[i][0]=='_')){
        for(int j=1;j<=len[i];j++){
          if((sz[i][j]>='A'&&sz[i][j]<='Z')||(sz[i][j]>='a'&&sz[i][j]<='z')||(sz[i][j]=='_')||(sz[i][j]>='0'&&sz[i][j]<='9')){
            continue;
          }else if(sz[i][j]=='\0'){
            printf("yes\n");
            break;
          }else{
            printf("no\n");
            break;
          }
        }
      }else{
        printf("no\n");
      }
    }
return 0;
}