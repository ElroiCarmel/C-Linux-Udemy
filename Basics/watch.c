#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds, minutes, hours, remainder;
    double data;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    remainder = seconds - minutes*60 - hours * 3600;
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds remainder: %d\n", remainder);
    data = 12.7;
    printf("%.2lf\n", data - ((int) data));
    return 0;
}