/*

Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int size=n*2-1;
      int start =0,i,j;
      int end=size-1;
      int a[size][size];
      
      
      while(n!=0)
      {
          for(i=start;i<=end;i++){
          
              for(j=start;j<=end;j++){
              
                  if(i==start || i==end || j==start || j==end)
                  
                      a[i][j]=n;
                  
              }
			  }
              ++start;
              --end;
              --n;
          
      }
      for( i=0;i<size;i++)
      {
          for( j=0;j<size;j++)
            printf("%d ",a[i][j]);
              
        
          printf("\n");
      }
      
    return 0;
}

