/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int aux, i;
 switch (month)
 {
   case 1: aux = day;
   break;
   case 2: aux = day + 31;
   break;
   case 3: aux = day + 60;
   break;
   case 4: aux = day + 91;
   break;
   case 5: aux = day + 121;
   break;
   case 6: aux = day + 152;
   break;
   case 7: aux = day + 182;
   break;
   case 8: aux = day + 213;
   break;
   case 9: aux = day + 244;
   break;
   case 10: aux = day + 274;
   break;
   case 11: aux = day + 305;
   break;
   case 12: aux = day + 335;
    break;
 }

  switch (aux%7)
{
    case 0: i=2;
    break;
    case 1: i=3;
    break;
    case 2: i=4;
    break;
    case 3: i=5;
    break;
    case 4: i=6;
    break;
    case 5: i=0;
    break;
    case 6: i=1;
    break;
} 
return i;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
