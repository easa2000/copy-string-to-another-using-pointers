//copy string to another string using pointers
#include<stdio.h>
void main()
{
    char str[100], copy_str[100];
    char *pstr, *pcopy_str;
    pstr = str;
    pcopy_str = copy_str;
    printf("\n Enter the String: ");
    gets(str);
    while(*pstr != '\0')
    {
        *pcopy_str = *pstr;
        pstr++;
        pcopy_str++;
    }
    *pcopy_str = '\0';
    printf("\n The copied text is: ");
    pcopy_str = copy_str;
    while(*pcopy_str != '\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }
}
