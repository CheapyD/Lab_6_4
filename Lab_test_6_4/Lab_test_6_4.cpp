#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_4/Lab_6_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest64
{
	TEST_CLASS(Labtest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix<int> A(4);
			Assert::AreEqual(A.GetSize(), 4);
		}
	};
}
