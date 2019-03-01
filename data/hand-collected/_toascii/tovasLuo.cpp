#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

static const double flag = 0.000001;

char* reverse(char* src)
{
    char* head = src;
    char* tail = src;
    while(*tail)
        tail++;
    --tail;

    char temp;
    while(tail > head)
    {
        temp = *head;
        *head = *tail;
        *tail = temp;
        head++;
        tail--;
    }
    return src;
}

char* ftoa(double src)
{
    
    long int_part = (long)src;
    double float_part = src - int_part;

    char int_res[32]={0};
    
    int i=0;
    do{
        int_res[i++] = int_part % 10 + '0';
        int_part /= 10;
    }while(int_part);

    
    reverse(int_res);
    
    float_part = fabs(float_part);
    
    while(1)
    {
        if(float_part - (long)(float_part) <= flag)
            break;
        float_part *= 10;
    }

    long temp = (long)float_part;
    char float_res[32]={0};
    i=0;
    do{
        float_res[i++] = temp % 10 + '0';
        temp /= 10;
    }while(temp);

    static char res[100];
    i = strlen(int_res);
    int_res[i] = '.';
    strcpy(res,int_res);
    strcat(res,float_res);
    return res;
}
