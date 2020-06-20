/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE " m002 <num1> <num2> <num3>"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{

    if (*a<=*b && *b<=*c)
        printf ("\n %d %d %d", *a, *b ,*c);

        else
        {
            if(*a<=*c && *c<=*b)
                printf ("\n %d %d %d", *a, *c, *b);
            
            else
            {
                if (*b<=*a && *a<=*c)
                    printf ("\n %d %d %d", *b, *a, *c);
                else
                {
                    if (*b<=*c && *c<=*a)
                        printf ("\n %d %d %d", *b, *c, *a);
                    else
                    {
                        if (*c<=*a && *a<=*b)
                            printf ("\n %d %d %d", *c, *a, *b);
                        else
                        {
                            if (*c<=*b && *b<=*a)
                            printf ("\n %d %d %d", *c, *b, *a);
                     
                        }
                    }
                                  
                }
            } 
        }
}


/*Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
