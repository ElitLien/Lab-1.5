///////////////
// Time.h
///////////////

#pragma once
#include <string>
#include "Triad.h"

using namespace std;

class Time {
	Triad t;
public:
	Triad getTriad() const { return t; }

	void setTriad(Triad tValue) { t = tValue; }

	void Init(Triad t);
	void Display() const;
	void Read();
	const string toString();

	bool h1(Time d) const;
	bool h2(Time d) const;
	bool m1(Time d) const;
	bool m2(Time d) const;
	bool s1(Time d) const;
	bool s2(Time d) const;
};