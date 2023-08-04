#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wis(char *str);

int main()
{
    char sen[50];
    printf("Type a sentence: ");
    scanf("%[^\n]s", sen);
    printf("Number of words in string is %d\n", wis(sen));
    return 0;
}

int wis(char *str)
{
    if(strlen(str)==1)
    {
        if (str[0] != ' ') return 1;
        else return 0;
    }
    int ans = 0;
    int i;
    for (i=1; i<strlen(str)-1; i++)
    {
        if (str[i]== ' ')
        {
         ans++;
         while(str[i+1] == ' ') i++;
        } 
    }
    return ans+1;
}