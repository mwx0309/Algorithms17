#pragma once
#include "headers.h"

//Test random number utilities functions
void RandRangeTest(int n, int low, int high);
void RandRangeSetTest(int n);
void RandDblTest(int n);
void RandTest(int n);

//sorting tests
void BubbleSortTest(int n);
void InsertionSortTest(int n);
void QuickSortTest(int n);
void Merge2SortedSubArrATest(int m, int n);
void MergeSortTest(int n);
void MakeHeapATest(int n);
void HeapSortTest(int n);

//classical
void LinearSearchTest(int n);
void BinarySearchTest(int n);

//EuclidGCD
void TestEuclidGCD(int a, int b);
void TestEuclidGCDSteps(int a, int b);
void TestEuclidGCDTypicalCases(bool showSteps = false);

//Primality test
void TestPrimalTestTrialDiv(int n);
void TestPrimalTestTrialDivDetail(int n);
void TestPrimalTestTrialDivRange(int m, bool detail = false);

//Exhaustive search
void TestES0_1KnapsackA();
void TestES0_1KnapsackR(int n = 6, int wRange = 20, int vRange = 20);
void ESPermutationTreeI(int n);
void ESPermutationTreeJ(int n);
void ESPermutationTreeT(int n);
void TestESTSPA();
void TestESTSP_UTA();
void TestESTSP_UT_FA();
void TestESTSP_UT_SD();