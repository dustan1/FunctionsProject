

#ifndef FIRST_H
#define FIRST_H 

#include <string>
#include <iostream>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

#define SMALL_NEG -2147483647 

using namespace std;




class objectFirst
{
      
public:

int one(char* s1, char* s2);      
int two(int minNum, int maxNum);
int three(int factorNum);
int four(unsigned int numOne, unsigned int numTwo); 
int five(char* palString, int strLen);
int six(int a, int b, char* output);

int seven(int numsPerLine, int arraySize, int *inputArray);
int seven(int numsPerLine, int arraySize, char *inputArray);//yey for overloading

int eight(int minNums, int maxNums, int minNum, int maxNum, int* output);
int nine(int minChars, int maxChars, int minChar, int maxChar, char* output);
int ten(int *inArray, int* output, int aLen);

      
};

#endif


