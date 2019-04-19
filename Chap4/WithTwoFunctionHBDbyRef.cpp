/*
 * Start.cpp
 * 
 * Program Description: game allows two players. Each player will take a certain amount of chips.
 *                      Whoever took the last piece, that player lose 
 *
 * Author: Michael Chang
 * Date: January 22, 2019
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printHBD();
void printHBD(string name, int &age);

int main()
{
    int myAge;
    printHBD();
    printHBD();
    cout << "Happy Birthday dear user\n";

    cout << "\nEnter you age\n";
    cin >> myAge;
    cout << "1. My age is: " << myAge << endl;
    printHBD("Erin", myAge);
    cout << "2. My age is: " << myAge << endl;

    return 0;
}

void printHBD()
{
    cout << "Happy Birthday to you\n";
}

void printHBD(string name, int &age)
{
    cout << "Happy Birthday " << name << endl;
    age += 10;
}