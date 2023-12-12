/*Given a positive integer denoting , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

The first line contains a single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Sample Input
5

Sample Output
Five

Sample Input #01
8

Sample Output #01
eight

Sample Input #02
44

Sample Output #02
Greater than 9

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    } else {
        printf("Greater than 9");
    }

    return 0;
}


Or 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        // Array of strings to hold the English words for numbers 1 to 9
        char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        
        printf("%s", words[n - 1]); // Print the corresponding word for the number
    } else {
        printf("Greater than 9");
    }

    return 0;
}


