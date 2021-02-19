#include<stdio.h>

float find_largest(float *, int);

int main()
{
    float numbers[5] = {983, 2.9, 24, 433, 1000.567};
    float *p;
    p = numbers;
    
    find_largest(numbers , 5);

    
}

float find_largest(float *ptr, int size){
    float largest = 0;
    for(int i = 0; i < size; i++)
    {
        if ( *ptr > largest)
        {
            largest = *ptr; 
        }
        *ptr++;
    }
    printf("The largest number is: %f", largest);
}
