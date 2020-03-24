#include "char_count.h"
/*
 * this function takes two arguments
 *     first is a string identifying all of the chars to look for and sum up
 *     and the second is the string to be looked at.
 *
 *     to find all of the vowels in a string:
 *
 *                char_count( "aeiouy","find the vowels from this string");
 *
 */

int char_count(char* chars_to_count, char *arg)
{
   int sum = 0;
   for (;*chars_to_count;chars_to_count++)
   {
      for (char *p=arg;*p;p++)
      {
       if (*chars_to_count==*p)
         sum++;
      }
   }
   return sum;
}
