#include <iostream>
#include <string>
using namespace std;

// Works for any element type T and any fixed-size C array.
// No need to pass the size; the compiler deduces N.
template <typename T, size_t N>
int findItem(const T (&arr)[N], const T &target)
{
    for (size_t i = 0; i < N; ++i)
        if (arr[i] == target)
            return static_cast<int>(i);
    return -1;
}

int main()
{
    const string words[] = {"a", "abc", "2"};
    int idx1 = findItem(words, string{"abc"});
    cout << "words: index of \"abc\" = " << idx1 << '\n';

    const int nums[] = {10, 20, 30, 40};
    int idx2 = findItem(nums, 30);
    cout << "nums: index of 30 = " << idx2 << '\n';

    return 0;
}
