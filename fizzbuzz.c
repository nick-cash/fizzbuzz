#include <stdio.h>
#include <stdint.h>

int main(void)
{
   uint8_t num;
   bool fizzed_or_buzzed = false;

   for (num = 1; num <= 100; ++num, fizzed_or_buzzed=false)
   {
      if ((num % 3) == 0)
      {
         printf("Fizz");
         fizzed_or_buzzed = true;
      }

      if ((num % 5) == 0)
      {
         printf("Buzz");
         fizzed_or_buzzed = true;
      }

      if (!fizzed_or_buzzed)
      {
         printf("%d", num);
      }

      printf("\n");
   }
}
