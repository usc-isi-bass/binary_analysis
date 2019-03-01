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
    int n;
    int p;
    scanf("%d\n",&n);
    char zfc[50];
    for(int i=0;i<n;i++){
        scanf("%s\n",zfc);
        p=strlen(zfc);
        for(int j=0;zfc[j];j++){
            if(zfc[p-2]=='l'&&zfc[p-1]=='y'){
                zfc[p-2]='\0';
            }
            else if(zfc[p-2]=='e'&&zfc[p-1]=='r'){
                zfc[p-2]='\0';
            }
            else if(zfc[p-3]=='i'&&zfc[p-2]=='n'&&zfc[p-1]=='g'){
                zfc[p-3]='\0';
            }
        }
        printf("%s\n",zfc);
    }
    return 0;
}


