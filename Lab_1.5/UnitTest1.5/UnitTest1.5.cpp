#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.5/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time d;
			d.Init();
		}
	};
}
