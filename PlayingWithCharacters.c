/*

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To C!!
*/

#include <stdio.h>
#include <string.h>

int main() {
    char ch, s[20], sen[400];

    // Read a character, a string, and a sentence
    scanf(" %c", &ch);
    scanf("%s", s); // Limiting the string to 19 characters to prevent buffer overflow
    scanf(" %[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}


