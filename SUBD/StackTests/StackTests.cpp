#include "pch.h"
#include "CppUnitTest.h"
#include "../Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests
{
	TEST_CLASS(StackTests)
	{
	public:
		
		TEST_METHOD(TestInitialization)
		{
			const auto result = new Stack();
			Assert::IsNotNull(result);
		}

		TEST_METHOD(TestParamsInit)
		{
			const size_t expectedSize = 3;

			Stack result = { 1,2,3 };
			Assert::AreEqual(expectedSize, result.GetSize());
		}

		TEST_METHOD(TestPush)
		{
			Stack result;
			size_t expected = 0;
			Assert::AreEqual(expected, result.GetSize());
			result.Push(29);
			expected = 1;
			Assert::AreEqual(expected, result.GetSize());
			Assert::AreEqual(29, result.Pop());
			result.Push(84);
			result.Push(39);
			Assert::AreEqual(39, result.Pop());
		}

		TEST_METHOD(TestPop)
		{
			Stack result;
			Assert::ExpectException<std::out_of_range>([&]
			{
				result.Pop();
			});
			result.Push(83);
			size_t expected = 1;
			Assert::AreEqual(expected, result.GetSize());
			Assert::AreEqual(83, result.Pop());
			expected = 0;
			Assert::AreEqual(expected, result.GetSize());
			result.Push(11);
			result.Push(19);
			Assert::AreEqual(19, result.Pop());
		}

		TEST_METHOD(TestSearch)
		{
			Stack result;
			Assert::ExpectException<std::out_of_range>([&]
			{
				result.Search(3);
			});
			result.Push(59);
			result.Push(82);
			result.Push(55);
			result.Push(43);
			result.Push(31);
			result.Push(8);
			result.Push(90);
			Assert::ExpectException<std::out_of_range>([&]
			{
				result.Search(42);
			});
			Assert::AreEqual(6, result.Search(82));
			Assert::AreEqual(1, result.Search(90));
		}

		TEST_METHOD(TestIsEmpty)
		{
			Stack result;
			Assert::IsTrue(result.isEmpty());
			result.Push(42);
			Assert::IsFalse(result.isEmpty());
		}

		TEST_METHOD(TestGetSize)
		{
			Stack result;
			
			size_t expectedSize = 0;
			Assert::AreEqual(expectedSize, result.GetSize());
			result.Push(2);
			expectedSize = 1;
			Assert::AreEqual(expectedSize, result.GetSize());
		}
	};
}
