/**
 * @file struc.h
 * @author Haider Ali Siddiquee (haiderali.siddiquee@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef STRUC_H
#define STRUC_H

/**
 * @brief This structure have two values breath and length. Both of type int.
 * 
 */
struct rectangle
{
    int breadth;
    int length;
};

/**
 * @brief This structure is used for complex number calculation. 
 * 
 */
struct ComplexNumber
{
    float real;
    float img;
};

/**
 * @brief This structure is use to keep the student diffent type of information under same name
 * 
 */

struct student
{
    int     Roll_number;
    char*   name;
    float   marks;
};

/**
 * @brief This is the structure for the playing cart
 * 
 */

struct cards
{
    int     face;
    char*   shape;
    char*   color;
}sCardStruct;



#endif // !STRUC_H
