/**
 * @file struc.c
 * @author Haider Ali Siddiquee (haiderali.siddiquee@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

 // this code is updated by Haider on 08/02/22

#include <stdio.h>

#include "struc.h"

extern struct cards sCardStruct;

/**
 * @brief Main function for struc.c, it have some basic feature with structure
 * 
 * @return int 
 */

int xmain()
{
    int ret = 0;
    int area;
    struct rectangle rect;
    struct rectangle rect2 = {2, 2};
    
    rect.breadth    = 5;
    rect.length     = 10;
    area            = rect.length * rect.breadth;
    printf("Value of first rectangle is: %d\n", area);   
    area = rect2.length * rect2.breadth;
    printf("Value of second rectangle is: %d\n", area);   
    printf("Program successfully executed\n");
    fflush(stdout);
    return ret;
}

/**
 * @brief This main function is use for cards only
 * 
 * @return int 
 */
int main()
{
    xmain();

    sCardStruct.color  = "black";
    sCardStruct.shape  = "Heart";
    sCardStruct.face   = 6;

    printf("Your card is %s, %s %d\n", sCardStruct.color, sCardStruct.shape, sCardStruct.face);
    printf(" The size of our struct %lu\n", sizeof(sCardStruct));
    fflush(stdout);
}