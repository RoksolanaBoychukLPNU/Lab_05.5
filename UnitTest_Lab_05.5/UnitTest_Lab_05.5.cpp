#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/Lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
    TEST_CLASS(UnitTest55)
    {
    public:

        // f(0) = 0, рекурсія не продовжується -> глибина 1
        TEST_METHOD(TestZero)
        {
            int depth = 0;
            Assert::AreEqual(0, f(0, 1, depth));
            Assert::AreEqual(1, depth);
        }

        // 13 = 1101(2) -> 3 одиниці, глибина = 3 + 1 = 4
        TEST_METHOD(Test13)
        {
            int depth = 0;
            Assert::AreEqual(3, f(13, 1, depth));
            Assert::AreEqual(4, depth);
        }

        // 255 = 11111111(2) -> 8 одиниць;  1024 = 10000000000(2) -> 1 одиниця
        TEST_METHOD(TestPowers)
        {
            int depth = 0;
            Assert::AreEqual(8, f(255, 1, depth));
            depth = 0;
            Assert::AreEqual(1, f(1024, 1, depth));
            Assert::AreEqual(2, depth);
        }
    };
}
