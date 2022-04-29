#include <iostream>
#include <string>
//biggest handled number by our program 
//WARNING THIS PROGRAM IS DESIGNED TO WORK UP TO 256 VALUES SHOULD YOU MODIFY THIS VALUE REMEMBER 
//TO INRISE THE SIEZE OF prime_array[] FIRST
static int hard_limit = 256;

//array wiht all prime numbers our program will be working on want to invcrese hard limit ? Increase this first
static int prime_array[] = { 2,  3,  5,  7, 11, 13, 17, 19, 23, 29,
                            31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
                            73, 79, 83, 89, 97, 101, 103, 107, 109,
                            113, 127, 131, 137, 139, 149, 151, 157,
                            163, 167, 173, 179, 181, 191, 193, 197,
                            199, 211, 223, 227, 229, 233, 239, 241,
                            251 };

static int prime_array_size = sizeof(prime_array) / sizeof(prime_array[0]);

static int biggest_number_of_divisions = prime_array[prime_array_size - 1] / prime_array[0] + 10;