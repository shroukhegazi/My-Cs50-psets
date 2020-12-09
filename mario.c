#include <cs50.h>
#include <stdio.h>
int get_rows_numbers();
void print_hashtags(int height);

  int main(void)
  {
  int height;
  height = get_rows_numbers();
  print_hashtags(height);

  }

 int get_rows_numbers(void)
{
    int rows;
 do
   {
   rows = get_int("rows: \n");
   }
 while (!(rows >= 1) || !(rows <= 8));
 return rows;
 }

void print_hashtags(int height){
    for(int i=0; i < height; i++){
        for(int j=0; j< i +1 ; j++){
            printf("#");
   }
       printf("\n");
}
}



