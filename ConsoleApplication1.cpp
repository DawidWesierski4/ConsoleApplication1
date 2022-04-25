/*===================================================================================
* Assignment: Program #0 -- programming project for Gdańsk Technical University
*
* Author: Dawid Węsierski
* Language: C++
* To Compile: Microsoft Visual Studio Community 2022 (64-bit) Version 17.2
* Version: 0.0.1
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
* 1 - int number (later called n variable) thats the number we will be "spliting"
* into the prime number
* 2 - int number (later called k variable) thats the number that will be the biggest
* prime number that will be in the output ( ONE IS NOT A PRIME NUMBER)
*
* __________________________________________________________________________________
* Example
* Input-------
* 2         #a
* 5 2       #n k
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

//this function returns a index of A variable in prime_array works like find
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

int main()
{
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
                    std::cout << index_of_prime(n) << "<-index of number we will be splitting" << std::endl;
                    std::cout << index_of_prime(n) << "<-index of the biggest part of that number " << std::endl;
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
        std::cout << "wrong starting number";
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
