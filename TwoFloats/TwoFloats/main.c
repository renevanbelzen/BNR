//
//  main.c
//  TwoFloats
//
//  Created by Rene van Belzen on 10/27/12.
//  Copyright (c) 2012 Rene van Belzen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Declare two floats
    float firstFloat, secondFloat;
    
    // Assign them two numbers, 3.14 and 42.0
    firstFloat = 3.14;
    secondFloat = 42.0;
    
    // Declare a double variable sum
    double sum;
    
    // Add the two numbers and put result in sum
    sum = firstFloat + secondFloat;
    
    // Log it to the user
    printf("sum = %f", sum);
    
    // done and exit normally
    
    return 0;
}

