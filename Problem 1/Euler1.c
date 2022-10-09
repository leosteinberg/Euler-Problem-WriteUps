#include <math.h>
#include <stdio.h>

long SumUnderN(long);

int main(){
    long i; //counter
    long T; // # of testcases
    long N; // place to store each instance of N.
    
    scanf("%ld",&T);
    
    for (i = 0;i < T;i++)
    {
        scanf("%ld",&N); 
        printf("%ld\n",SumUnderN(N));
    }
    return 0;
}
long SumUnderN(long N)
{
    long M3 = floor(((N-1)/3)); // multiples of 3
    long M5 = floor(((N-1)/5));// multiples of 5
    long M15 = floor(((N-1)/15));// multiples of 15
    long sum = (3*(M3*(M3+1))/2) + (5*(M5*(M5+1))/2) - (15*(M15*(M15+1))/2);
    return sum;
}
