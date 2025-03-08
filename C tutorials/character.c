#include<stdio.h>
int main()
{
    char ch;
    printf(" Ebter a character:");
    scanf("%c" , &ch);
    if (ch>='0' && ch<='9')
    printf("The character entered is a digit");
    else
    printf("The character entered is not a digit");
    
}