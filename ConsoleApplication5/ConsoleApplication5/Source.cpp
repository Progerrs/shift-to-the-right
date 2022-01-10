#include "Header.h"

char* get_new_str(char* str, bool& is_equal)
{
    if (strlen(str) < 2)
    {
        is_equal = true;
        return str;
    }
    else {
        char* str_copy = new char[strlen(str)];
        str_copy = strcpy(str_copy, str);
        char temp = str_copy[strlen(str) - 1];
        for (int i = 1; i < strlen(str); i++)
        {
            str[i] = str_copy[i - 1];
        }
        str[0] = temp;
        is_equal = cheak_eqval(str, str_copy);
        return str;
    }

}

bool cheak_eqval(char* str1, char* str2)
{
    for (size_t i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[i])
        {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}