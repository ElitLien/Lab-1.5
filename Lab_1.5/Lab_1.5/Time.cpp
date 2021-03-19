///////////////
// Time.cpp
///////////////

#include "Time.h"
#include <iostream>

using namespace std;

void Time::Init(Triad dValue)
{
	setTriad(dValue);
}

void Time::Display() const
{
	t.Display();
}

void Time::Read()
{
	Triad tValue;

	tValue.Read();

	Init(tValue);
}

bool Time::h1(Time d) const
{
	return t.h1(d.getTriad());
}

bool Time::h2(Time d) const
{
	return t.h2(d.getTriad());
}

bool Time::m1(Time d) const
{
	return t.m1(d.getTriad());
}

bool Time::m2(Time d) const
{
	return t.m2(d.getTriad());
}

bool Time::s1(Time d) const
{
	return t.s1(d.getTriad());
}

bool Time::s2(Time d) const
{
	return t.s2(d.getTriad());
}

const string Time::toString()
{
	stringstream sout;

	sout << t.toString();

	return sout.str();
}



