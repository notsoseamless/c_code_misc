
#include <stdio.h>

void insertion_sort(char s[], int n)
{
    int i,j;                /* counters */
    char temp;

    for (i=1; i<n; i++) 
    {
        j=i;
        while ((j>0) && (s[j] < s[j-1]))
        {
            //swap(&s[j],&s[j-1]);
            temp = s[j];
            s[j] = s[j-1];
            s[j-1] = temp;
            printf("%s\n", s);
            j = j - 1;
        } 
    }
}


int main()
{
    char s[] = {'I', 'N', 'S', 'E', 'R', 'T', 'I', 'O', 'N', 'S', 'O', 'R', 'T'};
    printf("%s\n", s);
    insertion_sort(s, 13);
}
