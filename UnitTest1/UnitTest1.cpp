#include "pch.h"
#include "CppUnitTest.h"
#include "../ucPractice/Sorts.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		//���� ��� ����������� ����������
		TEST_METHOD(RadixSortTest)
		{
			std::vector<int> arr = { 2,7,3,5,5,1 };

			radixSort(arr);

			std::vector<int> expected = { 1,2,3,5,5,7 };
			Assert::IsTrue(arr == expected);
		}

		//���� ��� ���������� ���������
		TEST_METHOD(InsertionSortTest)
		{
			std::vector<int> arr = { 2,7,3,5,5,1 };

			insertionSort(arr);

			std::vector<int> expected = { 1,2,3,5,5,7 };
			Assert::IsTrue(arr == expected);
		}

		//���� ��� ��������
		TEST_METHOD(BubleSortTest)
		{
			std::vector<int> arr = { 2,7,3,5,5,1 };

			bubleSort(arr);

			std::vector<int> expected = { 1,2,3,5,5,7 };
			Assert::IsTrue(arr == expected);
		}

		//���� ��� �������
		TEST_METHOD(ShakerSortTest)
		{
			std::vector<int> arr = { 2,7,3,5,5,1 };

			shakerSort(arr);

			std::vector<int> expected = { 1,2,3,5,5,7 };
			Assert::IsTrue(arr == expected);
		}

		//���� ��� �����
		TEST_METHOD(QuickSortTest)
		{
			std::vector<int> arr = { 2,7,3,5,5,1 };

			quickSort(arr);

			std::vector<int> expected = { 1,2,3,5,5,7 };
			Assert::IsTrue(arr == expected);
		}
	};
}
