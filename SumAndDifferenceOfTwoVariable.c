/*

Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Constraints

 integer variables 
 float variables 
Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0
Explanation

When we sum the integers  and , we get the integer . When we subtract the second number  from the first number , we get  as their difference.
When we sum the floating-point numbers  and , we get . When we subtract the second number  from the first number , we get  as their difference.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int a, b;
    float c, d;

    scanf("%d%d", &a, &b);
    scanf("%f%f", &c, &d);

    int sum = a + b;
    float sum1 = c + d;
    int sub = a - b;
    float sub1 = c - d;

    printf("%d %d\n", sum, sub);
    printf("%.1f %.1f\n", sum1, sub1);

    return 0;
}

