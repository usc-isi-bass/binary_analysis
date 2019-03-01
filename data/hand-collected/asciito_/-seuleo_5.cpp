#include <math.h>

uint8_t is_digit(u8 ch)  
{  
    if(ch>='0'&&ch<='9')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_letter(u8 ch)  
{  
    if(ch>='A'&&ch<='Z')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_space(u8 ch)  
{  
    if(ch==' ')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_inquiry(u8 *s)
{
    uint8_t i=0;
    
    while(s[i] != '=') i++;
    i++;               
    if(s[i] == '?')
            return 1;
    else
        return 0;
}

uint8_t Convert_ASCII_to_INT2(u8 *s)
{
    uint8_t value;
    uint8_t i=0;
    
    while(s[i] != '=') i++; 
    i++;               
    
    while(s[i] != '-') i++;  
    i++;
    
    for(value = 0;is_digit(s[i]);i++)
        value = value*10 + (s[i]-'0');  
    return value;   
}
