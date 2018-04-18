#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

long long factorialize(int num){
  if(num < 1){
      return 1;
  }
  return num * factorialize(num - 1);
}

int main(int argc, string argv[])
{
    while(argc != 2)
    {
        printf("function requires 1 command line argument");
    }

    printf("%lli\n", factorialize(atoi(argv[1])));
}
