#include<stdio.h>
#include<string.h>

int main()
{
    // Check how many distinct elements in an array
    char str[100] = "aaaabbbbccc";

    int freqArray[26] = {0};

    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        char ch = str[i];
        int index = ch - 'a';

        freqArray[index] = 1;
    }

    int counter = 0;
    for(int i = 0; i < 26; i++)
    {
        counter += freqArray[i];
        // printf("%d\n", freqArray[i]);
    }

    printf("%d", counter);

    return 0;
}
