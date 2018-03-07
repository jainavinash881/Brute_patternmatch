#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void search(char* pattern, char* txt);
int main()
{
 char txt[] = "AABABAACAADAABAAABAAAAABA";
    char pattern[] = "AABA";
    search(pattern, txt);
    return 0;
}

void search(char* pattern, char* txt)
{
    int m = strlen(pattern);
    int n = strlen(txt);
    int i,j;


    for ( i = 0; i <= n - m; i++) {


        for (j = 0; j < m; j++)
            if (txt[i + j] != pattern[j])
                break;

        if (j == m)
            printf("Pattern found at index %d \n", i);
    }
}
