#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_10.2/LAB_10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMaxConsecutiveSpaces)
		{
			
			std::string filename = "D:\\bloknot laba\\decat dwa.txt"; 
			size_t expected = 10; 

			
			size_t actual = MaxConsecutiveSpacesInFile(filename);

			
			Assert::AreEqual(expected, actual);
		}
	};
}
