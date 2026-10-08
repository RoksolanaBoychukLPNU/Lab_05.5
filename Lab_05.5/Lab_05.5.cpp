#include <iostream>

using namespace std;

// n     - число;
// level - поточний рівень рекурсії (параметр-значення);
// depth - глибина рекурсії (параметр-посилання,
//         максимальний досягнутий рівень)
int f(const unsigned int n, const int level, int& depth)
{
    if (level > depth)
        depth = level;

    cout << " level = " << level << "   n = " << n << endl;

    if (n == 0)                            // умова закінчення рекурсії
        return 0;
    else                                   // умова продовження рекурсії
        return 1 + f(n & (n - 1), level + 1, depth);
}

int main()
{
    unsigned int n;
    cout << "n = "; cin >> n;

    int depth = 0;                         // початкове значення глибини
    int count = f(n, 1, depth);            // 1 - початковий рівень

    cout << "number of ones = " << count << endl;
    cout << "depth = " << depth << endl;

    return 0;
}
