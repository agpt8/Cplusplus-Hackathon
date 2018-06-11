/**
 * @brief Ganesh has 2 rectangular boxes A & B, where A is bigger than B. Both of them have some elements. He wants to create a hole in A by placing all the elements of B in A. If the elements of B in A are not consecutive then all the middle elements are also considered as holes. He wants to have the SMALLEST HOLE, please help him in finding the index of first and the last hole. Note: the order of placing the elements of B in A doesn't matter.
 */

#include <iostream>
#include <list>
#include <algorithm>
// for abs(), C++ wrapper

using namespace std;

// predicate, which returns whether an integer is a prime number

bool isPrimeNum(int number) {
// ignore negative sign
    number = abs(number);
// 0 and 1 are prime numbers
    if (number == 0 || number == 1) {
        return true;
    }

// find divisor that divides without a remainder
    int divisor;
    for (divisor = (number / 2); (number % divisor) != 0; --divisor) { ; }
// if no divisor greater than 1 is found, it is a prime number
    return divisor == 1;
}

int main() {
// list container
    list<int> lst1;
    int x;
// insert elements from 24 to 30, constructing a list
    cout << "Enter the list";
    for (int i = 0; i <= 5; i++) {
        cin >> x;
        lst1.push_back(x);
    }

// list iterator to search for prime number
    list<int>::iterator pos;

// printing the data
    cout << "The list lst1 data: ";
    for (pos = lst1.begin(); pos != lst1.end(); pos++)
        cout << *pos << " ";
    cout << endl << endl;
// some operation
    while (pos != lst1.end()) {
        pos = find_if(lst1.begin(), lst1.end(), // range
                      isPrimeNum); // predicate
// print the result
        pos = lst1.begin();

        if (pos != lst1.end()) {
// found
            cout << *pos << endl;
        } else {
// not found
            cout << "no prime number found" << endl;
        }
        pos++;
    }
    return 0;
}
