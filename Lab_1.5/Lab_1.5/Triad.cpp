///////////////
// Triad.cpp
///////////////

#include "Triad.h"
#include <iostream>

using namespace std;

bool Triad::setFirst(int value)
{
    if (value > -1 && value < 24)
    {
        first = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triad::setSecond(int value)
{
    if (value > -1 && value < 60)
    {
        second = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Triad::setThird(int value)
{
    if (value > -1 && value < 60)
    {
        third = value;
        return true;
    }
    else
    {
        return false;
    }
}

void Triad::Init(int firstValue, int secondValue, int thirdValue)
{
    setFirst(firstValue);
    setSecond(secondValue);
    setThird(thirdValue);
}

void Triad::Display() const
{
    cout << first << "." << second << "." << third << endl;
}

void Triad::Read()
{
    int firstValue;
    int secondValue;
    int thirdValue;

    cout << "Enter triad " << endl << endl;
    cout << "first =  "; cin >> firstValue;
    cout << "second =  "; cin >> secondValue;
    cout << "third =  "; cin >> thirdValue;

    Init(firstValue, secondValue, thirdValue);
}

bool G(const Triad& t1, const Triad& t2)
{
    return (t1.first > t2.first) || (t1.first == t2.first && t1.second > t2.second) || (t1.first == t2.first && t1.second == t2.second && t1.third > t2.third);
}

bool Triad::h1(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return false;
}
bool Triad::h2(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return true;
}
bool Triad::m1(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return true;
    }

    return false;
}
bool Triad::m2(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return false;
    }

    return true;
}
bool Triad::s1(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return false;
}
bool Triad::s2(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return true;
}
const string Triad::toString()
{
    stringstream sout;

    sout << first << "." << second << "." << third;

    return sout.str();
}
double Triad::check()
{
    return first > second;
}
