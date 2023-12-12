/*

Function Description

Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format

The only line contains  space-separated integers,  and .

Constraints

Sample Input 0

5 4
Sample Output 0

2
3
3
Explanation 0



All possible values of  and  are:


The maximum possible value of  that is also  is , so we print  on first line.

The maximum possible value of  that is also  is , so we print  on second line.

The maximum possible value of  that is also  is , so we print  on third line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int m1=0,m2=0,m3=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          int and=i&j;
          
         
          if(and <k && and>m1)
          m1=and;
          int or=i|j;
          if(or<k && or>m2)
          m2=or;
           int xor=i^j;
          if(xor<k && xor>m3)
          m3=xor;
      }
  }
  printf("%d\n",m1);
  printf("%d\n",m2);
  printf("%d\n",m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

