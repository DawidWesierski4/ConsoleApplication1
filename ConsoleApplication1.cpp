/*===================================================================================
* Assignment: Program #0 -- programming project for Gdańsk Technical University
*
* Author: Dawid Węsierski
* Language: C++
* To Compile: Microsoft Visual Studio Community 2022 (64-bit) Version 17.2
* Version: 0.1.4
* Date: 05.04.2022
*
* ----------------------------------------------------------------------------------
* Description:
* This project purpose is to practise the use of recursion. This program outputs
* every combination of prime numbers that after adding up will give the number of
* imputed number. You also gives a paramter that will be the biggest prime number
* that will be ouputed. Number our program will be working on shouldnt exceed 256
*
* n=n1+n2+...+nr    =>  n1≥n2≥...≥nr
*
* Imput:
* 0 - int number the number of cases of the problem (called a later)
* 1 - int number (later called n variable) thats the number we will be "spliting"ddddd
* into the prime number
* 2 - int number (later called k variable) thats the number that will be the biggestasd
* prime number that will be in the output ( ONE IS NOT A PRIME NUMBER)
*
* __________________________________________________________________________________
* Example
* Input-------
* 2         #a
* 12 5      #n k
* 27 17     #n k
*
* Output-----
* 5+3+2+2
* 5+5+2
* 17+2+2+2+2+2
* 17+3+3+2+2
* 17+5+3+2
* 17+5+5
* 17+7+3
*
*==================================================================================*/
#include "Header.h"


// this function returns a index of A variable in prime_array ... works like find basicly
// don't judge me 
// in future meaby i will make it efficient but works for now
int index_of_prime(int a) {
    for (int i = 0; i < prime_array_size; i++) {
        if (a == prime_array[i])
            return i;
        else if (a < prime_array[i]) {
            throw(std::string("your data is not a prime number or is too big"));
            return -1;
        }
    }
    return -1;
}

// 
int closest_index_of_prime(int a) {
    for (int i = 0; i < prime_array_size; i++)
    {
        if (!(a > prime_array[i]))
            return i-1;
    }
    throw(std::string("your data is esceding the maximum size of prime array"));
}


void printing_arr(int* start, int* finish)
{

    if ((finish - start) > biggest_number_of_divisions ||
        finish - start < 0)
    {
        throw(std::string("the pointer in the printing_arr function aren't pointing to the same array"));
    }
    while (start != finish)
    {
        std::cout << *start << " ";
        start++;
    }

}



void repetto(int n, int k, int* aux,int* root)
{
    if (k == 0&&n%2==0)
    {
        printing_arr(root, aux);
        while (n>0)
        {
            std::cout << "2" << " " ;
            n -= 2;
        }
        std::cout << std::endl;
    }
    else
    {

        if (n - prime_array[k] > 1 )
        {
            *aux = prime_array[k];
            n =n-prime_array[k];
            for(int i=0;(i<=k&&(n-prime_array[i]>=0)); i++)
            {
                repetto(n, i, aux + 1, root);
            }
        }
        else if (n - prime_array[k] == 0)
        {
            *aux = prime_array[k];
            repetto(n - prime_array[k], 0, aux + 1, root);
        }
        else if(k>0)
        {
            repetto(n, k - 1, aux, root);
        }
    }
}


//this is main function it prints every combination of prime number that can be combined into the number 
//input:    n-> prime number we will divide
//          k-> index of the biggest component in prime_array_size array 
void printing_parts(int n, int k)
{
    int* aux = new int[biggest_number_of_divisions];
    aux[0] = prime_array[k];
    for (int i = 0; i <= closest_index_of_prime(n - prime_array[k]); i++)
    {
        repetto(n - prime_array[k], i, aux + 1, aux);
    }
    delete[] aux;
}


int main()
{
    std::cout << biggest_number_of_divisions << " <-biggest_number_of_divisions" << std::endl;
    std::cout << prime_array_size << " <-prime_array_size" << std::endl;
    /*
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << " <-i  " << closest_index_of_prime(i) << "  <-index   " << prime_array[closest_index_of_prime(i)] << std::endl;
    }
    */
    /* TESTING */
    int a, n, k;    
    try
    {
        std::cin >> a;
        for(int iterator=0;iterator<a;iterator++){
            try {
                for (int i = 0; i < a; i++)
                {
                    std::cin >> n; // number we will be spliting 
                    std::cin >> k; // the biggest part of every way of decomposition our program makes
                    printing_parts(n, index_of_prime(k));
                }
            }
            catch (std::string problem)
            {
                std::cout << "program encoutered an error within component listed below:" << std::endl;
                std::cout << problem << std::endl;
            }
            catch (...)
            {
                std::cout << "Program encountered an unhandled exception" << std::endl;
                std::cout << "try again" << std::endl;
            }
        }
    }
    catch (...)
    {
        std::cout << "unhandled expection";
    }
    /* TESTING DONE */
}

