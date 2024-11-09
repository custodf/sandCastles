#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string phrase = get_string("Enter a phrase: ");
    
    int length = strlen(phrase);
    for (int i = 0; i < length - 1; i++)
    {
        // Check if the characters are NOT alphabetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order.");
            return 0;
        }
    }
    printf("Alphabetical order.\n");
}