#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int sumFibs(int num)
{
    int previous = 0;
    int current = 1;
    int sum = 0;
    while(current <= num)
    {
        if (current % 2 != 0)
        {
           sum += current;
        }
        current += previous;
        previous = current - previous;

    }
    return sum;
}

int main(int argc, string argv[])
{
    while(argc != 2)
    {
        printf("function requires 1 command line argument");
    }

    printf("%i\n", sumFibs(atoi(argv[1])));
}
