#include "../include/testheaders.h"

void basicOutputTest();

int main()
{
	SetRandSeed();
    TestPrimalTestTrialDivRange(100, true);
    //tttttyyy
    //BinarySearchTest(8);
    //LinearSearchTest(8);
    //TestEuclidGCDTypicalCases(true);
    //TestEuclidGCDTypicalCases();
    //TestEuclidGCDSteps(168, 180);
    //TestEuclidGCDSteps(252, 105);
    //TestEuclidGCD(252, 105);
    //HeapSortTest(8);
    //MakeHeapATest(8);
    //MergeSortTest(8);
    //Merge2SortedSubArrATest(3, 4);
	//QuickSortTest(8);
	//InsertionSortTest(8);
	//BubbleSortTest(8);
    //RandRangeTest(10, 0, 100);
    //RandRangeSetTest(10);
    //RandDblTest(10);
    //RandTest(10);
    //basicOutputTest();
	getchar();
	return 0;
}
void basicOutputTest()
{
	printf("Hello world!\n");
	auto n = 33;
	printf("n=%d\n", n);
	int a[] = { 22, 33, 44 };
	for (auto i : a)
		printf("%d\n", i);
	std::cout << "abc";
}