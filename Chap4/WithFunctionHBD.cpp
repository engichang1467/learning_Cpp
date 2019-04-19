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
int printHBD(string name);

int main()
{
    int myAge;
    printHBD();
    printHBD();
    cout << "Happy Birthday dear user\n";
    cout << printHBD("Erin") << endl;

    myAge = printHBD("Erin");
    return 0;
}

void printHBD()
{
    cout << "Happy Birthday to you\n";
}

int printHBD(string name)
{
    int age;
    cout << "Happy Birthday " << name << endl;
    cout << "Enter your age \n";
    cin >> age;
    return age;
}