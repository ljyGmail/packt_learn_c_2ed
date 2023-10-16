#include <stdio.h>

void printAGreeting(char *greeting)
{
    printf("%s", greeting);
}

void printAComma(void)
{
    printf(", ");
}

void printAnAddress(char *aName)
{
    printf("%s", aName);
}

void printANewLine(void)
{
    printf("\n");
}

void printGreeting(char *aGreeting, char *aName)
{
    printAGreeting(aGreeting);
    printAComma();
    printAnAddress(aName);
    printANewLine();
}

int main(void)
{
    printGreeting("Hi", "Bub");
    return 0;
}