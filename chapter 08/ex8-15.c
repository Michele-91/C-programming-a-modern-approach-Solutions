/****************************************************************************************
One of the oldest known encryption techniques is the Caesar cypher, attributed to Julius
Caesar. It involves replacing each letter in a message with another letter that is a
fixed number of positions later in the alphabet. (if the replacement would go past
letter Z, the cipher "wraps around" to the beginning of the alphabet. For example, if 
each letter is replaced by the letter two positions after it, then Y would be replaced
by A, and Z would be replaced by B.) Write a program that encrypts a message using a
Caesar cipher. The user will enter the message to be encrypted and the shift amount
(the number of positions by which letters whould be shifted).
You may assume that the message does not exceed 80 characters. Characters other than 
letters should be left unchanged. Lower-case remains lower-case when encrypted, and 
upper-case letters remain upper-case.
*****************************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define MAX_VALUE 80

int main()
{ 

    char ch, sentence[80] = {0};
    int i, length = 0, shift;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n' && i < 80; i++) {
        sentence[i] = ch;
        length++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (i = 0; i < length; i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            printf("%c", ((sentence[i] - 'A') + shift) % 26 + 'A');
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            printf("%c", ((sentence[i] - 'a') + shift) % 26 + 'a');
        }
        else {
            printf("%c", sentence[i]);
        }
    }


    return 0;
}
