
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*int count_letters (text[i]);
int count_words (text[i]);
int count_sentences (text[i]);*/

int main()
{
    string text = get_string("text:");
    int letters_num = 0;
    int words_num = 1;
    int sentences_num = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text [i] >= 'a' && text [i] <= 'z') || (text [i] >= 'A' && text [i] <= 'Z'))
        {
            letters_num++;
        }
        else if (text [i] == ' ')
        {
            words_num++;
        }
        else if (text [i] == '.' || text [i] == '!' || text [i] == '?')
        {
            sentences_num++;
        }
    }
    float grade = 0.0588 * (100 * (float) letters_num / (float) words_num) - 0.296 * (100 * (float) sentences_num / 
                  (float) words_num) - 15.8;

    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");

    }
}