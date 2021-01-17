# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>
# include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    // Very ugly, remember to find different solution
    int l = 0;
    int w = 0;
    int e = 0;
    // Gathers data on letter/word/sentence number
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            l++;
        }
        else if (isspace(s[i]))
        {
            w++;
        }
        // Maybe there was a command that did this for me? But didn't want to trigger on ,
        else if (s[i] == 46 || s[i] == 33 || s[i] == 63)
        {
            e++;
        }
    }
    w++;
    // Calculates index
    float L = l * 100 / (float) w;
    float S = e * 100 / (float) w;
    float I = 0.0588 * L - 0.296 * S - 15.8;
    int g = round(I);
    // Prints specific grade while checking if below min/max
    if (g < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (g > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", g);
    }
}
