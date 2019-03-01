// ------------------------------------------------------------------------- 
// ����       : StrToFloatA 
// ����       : ��һ���ַ���ת��Ϊ������ 
// ����ֵ  : float  
// ����       : char* pstrfloat 
// ��ע       :  
// ------------------------------------------------------------------------- 
float StrToFloatA(char* pstrfloat) 
{ 
    // check 
    if (!pstrfloat) 
    { 
        return 0.0; 
    } 
 
    bool bNegative = false; 
    bool bDec = false; 
 
    char* pSor = 0; 
    char chByte = '0'; 
    float fInteger = 0.0; 
    float fDecimal = 0.0; 
    float fDecPower = 0.1f; 
 
    // ������λ�жϣ��ж��Ƿ��Ǹ��� 
    if (pstrfloat[0] == '-') 
    { 
        bNegative = true; 
        pSor = pstrfloat + 1; 
    } 
    else 
    { 
        bNegative = false; 
        pSor = pstrfloat; 
    } 
 
    while (*pSor != '\0') 
    { 
        chByte = *pSor; 
 
        if (bDec) 
        { 
            // С�� 
            if (chByte >= '0' && chByte <= '9') 
            { 
                fDecimal += (chByte - '0') * fDecPower; 
                fDecPower = fDecPower * 0.1; 
            } 
            else 
            { 
                return (bNegative? -(fInteger +  fDecimal): fInteger + fDecimal); 
            } 
        } 
        else 
        { 
            // ���� 
            if (chByte >= '0' && chByte <= '9') 
            { 
                fInteger = fInteger * 10.0 + chByte - '0'; 
            } 
            else if (chByte == '.') 
            { 
                bDec = true; 
            } 
            else 
            { 
                return (bNegative? -fInteger : fInteger); 
            } 
        } 
 
        pSor++; 
    } 
 
    return (bNegative? -(fInteger +  fDecimal): fInteger + fDecimal); 
} 
 