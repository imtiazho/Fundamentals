#include<stdio.h>

int main()
{
    // Escape sequence
    /*
        \t for tab
        \0 for terminate
        \n for new line
    char str[] = "\"Bangladsh\" is a good country";
    puts(str);
    */

    // String to number
    /*
    char str[5] = "5";
    printf("%d\n", str[0] - '0');
    */
    char str[20];
    int n;
    scanf("%d", &n);
    scanf("%s", &str);

    int num = 0;
    for(int i = 0; i < n; i++)
    {
        int digit = str[i] - '0';
        num = (num * 10) + digit;
    }

    printf("%d", num);


    return 0;
}
