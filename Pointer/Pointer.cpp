// Pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void CalcArea(const double* const ptrPi, const double* const ptrRadius, double* const ptrArea)
{
    if (ptrPi && ptrRadius && ptrArea)
    {
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    }
}

int main()
{
    /*int age = 30;
    int* pointsToInt = &age;
    std::cout << "pointsToInt points to age now"<<std::endl;
    std::cout << "pointsToInt = 0x"<< std::hex << pointsToInt << std::endl;

    int dogsAge = 9;
    pointsToInt = &dogsAge;
    std::cout << "pointsToInt points to dogsAge now" << std::endl;
    std::cout << "pointsToInt = 0x" << std::hex << pointsToInt << std::endl;*/

    // Pointer address and value

    /*int age = 30;
    int dogsAge = 9;
    std::cout << "Integer age = " << age << std::endl;
    std::cout << "Integer dogsAge = " << dogsAge << std::endl;

    int* pointsToInt = &age;
    std::cout << "pointsToInt points to age now" << std::endl;
    std::cout << "pointsToInt = 0x" << std::hex << pointsToInt << std::endl;
    std::cout << "pointsToInt = " << std::dec << *pointsToInt << std::endl;

    pointsToInt = &dogsAge;
    std::cout << "pointsToInt points to dogsAge now" << std::endl;
    std::cout << "pointsToInt = 0x" << std::hex << pointsToInt << std::endl;
    std::cout << "pointsToInt = " << std::dec << *pointsToInt << std::endl;*/

    // Pointer increase

    /*int* pointsToInts = new int[2];
    *pointsToInts = 1;
    *(pointsToInts + 1) = 2;
    std::cout << "address1 = " << pointsToInts << std::endl;
    std::cout << "address2 = " << pointsToInts + 1 << std::endl;*/

    // Const Pointer to be function parameter

    /*const double Pi = 3.1416;
    double radius = 20;
    double area = 0;
    CalcArea(&Pi, &radius, &area);
    std::cout << "Area is = " << area << std::endl;*/

    // Array and pointer

    /*const int ARRAY_LEN = 5;
    int myNumbers[ARRAY_LEN] = { 24, -1, 365, -999, 2011 };
    int* pointToNumbers = myNumbers;
    std::cout << "Display array using pointer syntax， operator*" << std::endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
    {
        std::cout << "Element " << index << "=" << *(myNumbers + index) << std::endl;
    }
    std::cout << "Display array using ptr with array syntax， operator[]" << std::endl;
    for (int index = 0; index < ARRAY_LEN; index++)
    {
        std::cout << "Element" << index << "=" << pointToNumbers[index] << std::endl;
    }*/
    
    // Dynamic new memory Exception

    /*try
    {
        int* pointsToManyNums = new int[0x1fffffffffffffff];
        delete[] pointsToManyNums;
        std::cout << "Memory allocation Successful" << std::endl;
    }
    catch (const std::exception&)
    {
        std::cout << "Memory allocation failed. Ending program" << std::endl;
    }*/

    // new(nothrow)
    int* pointsToManyNums = new(std::nothrow) int[0x1fffffffffffffff];
    if (pointsToManyNums)
    {
        delete[] pointsToManyNums;
    }
    else
        std::cout << "Memory allocation failed. Ending program" << std::endl;

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
