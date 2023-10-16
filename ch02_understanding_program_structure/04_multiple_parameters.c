#include <stdio.h>

void printComma(void)
{
    printf(", ");
}

void printWord(char *word)
{
    printf("%s", word);
}

void printGreeting(char *greeting, char *addresses)
{
    printWord(greeting);
    printComma();
    printWord(addresses);
    printf("!\n");
}

int main(void)
{
    printGreeting("Hello", "world");
    printGreeting("Good day", "Your Roayl Highness");
    printGreeting("Howdy", "John Q. and Jane P. DOe");
    printGreeting("Hey", "MOe, Larry, and Curly");
}