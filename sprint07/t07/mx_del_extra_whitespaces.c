#include <stdlib.h>
#include <stdbool.h>
bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
void *mx_strnew(const int size);
char *mx_strtrim(const char*str);
char *mx_del_extra_whitespaces(const char *str) 
{
    char *arr = mx_strtrim(str);
    int size_src = 0; 
    int size_res = 0;
    while (*arr)  
    {
        size_src++;
        arr++;
        if (!mx_isspace(*arr) || (mx_isspace(*arr) && !mx_isspace(*(arr + 1))))
        {
            size_res++;
        }
    }
    arr -= size_src;
    char *res = mx_strnew(size_res);
    
    for(int i = 0, j = 0; i < size_src; i++) 
    {
        if(!mx_isspace(arr[i]) || (mx_isspace(arr[i]) && !mx_isspace(arr[i + 1])))
        {
            res[j++] = arr[i];
        }
    }
    free(arr);
    return res;
    
}










