#include<stdio.h>
int main()
{
    char str1[1024] = "asfhk\0";
    int len = strlen(str1);
    char str[len];
    strcpy(str,str1);
    return 0;
}