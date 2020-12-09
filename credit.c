#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>


int get_length (long long cardnumber);
bool check_sum (long long cardnumber);
bool check_vadility (long long cardnumber);
void card_name (long long start);

int main (void)
{
    long long card_number;
    do
    {
        card_number = get_long("card number is:");
    }
    while (card_number < 0);
    if (check_vadility (card_number))
    card_name (card_number);
    else
    printf ("INVALID\n");

}

 int get_length (long long cardnumber)
 {
 int length = (int)floor(log10((float)cardnumber)) + 1;
 return length;
 }


 bool check_vadility (long long cardnumber)
 {
    int len = get_length (cardnumber);

    return (len ==13 || len ==15 || len == 16) &&  check_sum (cardnumber);
 }


 bool check_sum (long long cardnumber)
 {
  int sum=0;
    for (int i=0; cardnumber!=0; i++,cardnumber/=10)
    {
      if (i%2 == 0)
      {
          sum = sum + cardnumber%10;
      }
      else
      {
          int digit = 2*(cardnumber%10);
          sum += digit%10  + digit/10;

      }
      }
      return sum %10==0;
 }


 void card_name (long long start)
   {
     if ((start >= 34e13 && start <35e13 ) || (start >= 37e13 && start <38e13 ))
     {
          printf ("this is an american card\n");
     }
      else if (start >= 51e14 && start <58e14 )
      {
           printf ("this is a mastercard\n");
      }
       else if  ((start >= 4e12 && start <5e12 ) ||  (start >= 4e15 && start <5e15 ) )
      {
           printf ("this is a visa\n");
      }
      else
      {
          printf ("INVALID\n");
      }
 }


