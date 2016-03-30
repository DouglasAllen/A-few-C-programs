/* Write a C program to accept a set of numbers and arrange them  *
 * in a descending order                                          */

#include <stdio.h>

void main ()
{
  int number[30];
  int i,j,a,n;

  printf ("Enter the value of N\n");
  scanf ("%d", &n);

  printf ("Enter the numbers \n");
  for (i=0; i<n; ++i)
  scanf ("%d",&number[i]);

  /* sorting begins ...*/
  for (i=0; i<n; ++i)
  {
        for (j=i+1; j<n; ++j)
     {
            if (number[i] < number[j])
            {
                a        = number[i];
                number[i] = number[j];
                number[j] = a;
            }
     }
  }

  printf ("The numbers arranged in descending order are given below\n");
  for (i=0; i<n; ++i)
  {
        printf ("%d\n",number[i]);
  }

}             /* End of main() */

/*------------------------------------------------
 Output
 Enter the value of N
6
Enter the numbers
10
35
67
100
42
688
The numbers arranged in descending order are given below
688
100
67
42
35
10
*/

