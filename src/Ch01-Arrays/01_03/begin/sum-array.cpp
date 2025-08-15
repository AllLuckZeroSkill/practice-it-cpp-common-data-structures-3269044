#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

std::vector<int> primeNumbers(const int arr[], int size)
{

    std::vector<int> primeArray;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            primeArray.push_back(arr[i]);
        }
    }

    return primeArray;
}

int main()
{
    const int ints[]{1, -7, 17, 2, 4, 1, 84, 57, 93, 129};
    int size = 10;

    std::vector<int> result = primeNumbers(ints, size);

    cout << "The prime numbers in the array are ";
    for (int i : result)
    {
        cout << i << " ";
    }
}