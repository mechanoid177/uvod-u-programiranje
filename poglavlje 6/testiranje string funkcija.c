#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    char c, s1[100], s2[100], str[200];
    char* poks1 = s1;
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    printf("Unesite karakter: ");
    scanf("%c", &c);
    printf("ctype.h:\n");
    printf("isalnum = %d\n", isalnum(s1[0]));
    printf("isalpha = %d\n", isalpha(s1[0]));
    printf("iscntrl = %d\n", iscntrl(s1[0]));
    printf("isdigit = %d\n", isdigit(s1[0]));
    printf("isgraph = %d\n", isgraph(s1[0]));
    printf("islower = %d\n", islower(s1[0]));
    printf("isprint = %d\n", isprint(s1[0]));
    printf("ispunct = %d\n", ispunct(s1[0]));
    printf("isspace = %d\n", isspace(s1[0]));
    printf("isupper = %d\n", isupper(s1[0]));
    printf("isxdigit = %d\n", isxdigit(s1[0]));
    printf("toupper = %c\n", toupper(poks1[1]));
    printf("tolower = %c\n", tolower(poks1[1]));
    printf("================================\nstring.h:\n");
    strcpy(str, s1);
    printf("strcpy = %s\n", str);
    strncpy(str, s2, 4);
    printf("strncpy = %s\n", str);
    strcat(str, s1);
    printf("strcat = %s\n", str);
    strncat(str, s2, 4);
    printf("strncat = %s\n", str);
    printf("strcmp = %d\n", strcmp(s1, s2));
    printf("strncmp = %d\n", strncmp(s1, s2, 4));
    printf("strcmpi = %d\n", strcmpi(s1, s2));
    printf("strchr = %s\n", strchr(s1, c));
    printf("strstr = %s\n", strstr(str, s1));
    printf("strlen = %d\n", strlen(s1));
    printf("strpbrk = %s\n", strpbrk(str, s1));
}
