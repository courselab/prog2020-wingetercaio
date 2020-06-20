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
  int t;
  int j;
  int i;

    if (*a<=*b && *b<=*c)
        
      {
      *a = *a;
      *b = *b;
      *c = *c;
      }
        else
        {
            if(*a<=*c && *c<=*b)
        { 
              *a = *a;
              *b = *b;
              *c = *c;
        }
            else
            {
                if (*b<=*a && *a<=*c)
                {
              
                t = *b;
                j = *a;
                *a = t;
                *b = j;
                *c = *c;
                }
                else
                {
                    if (*b<=*c && *c<=*a)
                        
                    {
                    t = *b;
                    j = *c;
                    i = *a;
                    *a = t;
                    *b = j;
                    *c = i;
                    
                    }

                    else
                    {
                        if (*c<=*a && *a<=*b)
                            
                        {
                        t = *c;
                        j = *a;
                        i = *b;
                        *a = t;
                        *b = j;
                        *c = i;
                        
                        
                        }                      
                        else
                        {
                            if (*c<=*b && *b<=*a)
                           
                           t = *a;
                           j = *c;
                           *a = j;
                           *b = *b;
                           *c = t;
                           
                            
                     
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
