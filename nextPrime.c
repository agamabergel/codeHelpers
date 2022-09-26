#include  <stdio.h>

/*
 * It is based on the idea that all prime numbers are in form of 6k+-1, 
 * so I'm only testing 2, 3 and numbers in form 6+-1. 
 * Of course, the loop quits when divisor breaches sqrt(a) because all such numbers have already been tested.
 * */
bool IsPrime(int number)
{

    if (number == 2 || number == 3)
        return true;

    if (number % 2 == 0 || number % 3 == 0)
        return false;

    int divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {

        if (number % (divisor - 1) == 0)
            return false;

        if (number % (divisor + 1) == 0)
            return false;

        divisor += 6;

    }

    return true;

}

int NextPrime(int a)
{

    while (!IsPrime(++a))
    { }
    return a;

}

