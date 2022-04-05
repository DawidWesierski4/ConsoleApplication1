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
* that will be ouputed.
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

#include <iostream>


int main()
{
    std::cout << "Hello World!\n";
    int i;
    std::cin >> i;
    return 0;
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
