#include <stdio.h>

// function prototypes
void printGreeting(char *aGreeting, char *aName);
void printAGreeting(char *greeting);
void printAnAddress(char *aName);
void printAComma(void);
void printANewLine(void);

int main(void)
{
    printGreeting("Hi", "Bub");
    return 0;
}

void printGreeting(char *aGreeting, char *aName)
{
    printAGreeting(aGreeting);
    printAComma();
    printAnAddress(aName);
    printANewLine();
}

void printAGreeting(char *greeting)
{
    printf("%s", greeting);
}

void printAnAddress(char *aName)
{
    printf("%s", aName);
}

void printAComma(void)
{
    printf(", ");
}

void printANewLine(void)
{
    printf("\n");
}