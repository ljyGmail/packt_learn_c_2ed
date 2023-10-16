#include <stdio.h>

void printComma(void)
{
    printf(", ");
}

void printWord(char *word)
{
    printf("%s", word);
}

int main(void)
{
    printWord("Hello");
    printComma();
    printWord("world");
    printf("!\n");
    return 0;
}