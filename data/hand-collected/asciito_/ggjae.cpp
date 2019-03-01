#include <stdio.h>
#include <ctype.h>

/* atof: convert string s to double */
double atof(char s[]) {
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    } 
    double result = val;
    val = 0;
    int powersign; 
    double sosujumpower = 1;
    if(s[i]=='E'||s[i]=='e'){
        i++;
        for (i = 0; isspace(s[i]); i++)
            ;
        powersign = (s[i] == '-') ? -1 : 1; // -�϶� Ȯ�� 
        /*if(s[]){
            -1
        }
        else{
            1
        }*/
        if (s[i] == '+' || s[i] == '-')
            i++;
        for (val = 0.0; isdigit(s[i]); i++)
            val = 10.0 * val + (s[i] - '0');
        if (s[i] == '.')
            i++;
    val *= powersign;
    }
    int unit = (int)val;
    double tmppower = 1;
    if(unit<0){
        while(unit!=0){
            tmppower/=10;
            unit++;
        }
    }
    else{
        while(unit!=0){
            tmppower*=10;
            unit--;
        }
    }

    return sign * result*tmppower / power;
}
