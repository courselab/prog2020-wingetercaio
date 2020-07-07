/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int i=0;
  int a=0;
  int b=0;
  int c=0;

  char t[MAX];

  strcpy(t,s);

  while (*(t+i)!=0)
  {

  if (*(t+i)==32 || (*(t+1)==9))
  {
    a = i;
    i++;
  }
 
  else 
  i++;
}
  
while (*(t+a+b+1) != 0)
{
  if ((*(t+a+1+b) <= 90)&&(*(t+a+b+1) >= 65))
  {
    *(s+b)=*(t+a+b+1);
    b++;
  }
 
  else
 
    if ((*(t+a+1+b) <= 122) &&(*(t+a+b+1)>=97))
    {
  
      *(s+b) = (*(t+a+b+1)-32);
      
      b++;
    }
    else
    
    b++;
}
*(s+b-1)=44;

*(s+b)=32;

while(c<a)

{
  *(s+b+1) =*(t+c);
  b++;
  c++;

}
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
