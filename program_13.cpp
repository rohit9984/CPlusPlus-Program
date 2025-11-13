#include <iostream>
using namespace std;
template <typename T>
T findLargest(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << "Largest among 10 and 20 (int): " << findLargest(10, 20) << endl;
    cout << "Largest among 5.6 and 2.9 (double): " << findLargest(5.6, 2.9) << endl;
    cout << "Largest among 'A' and 'Z' (char): " << findLargest('A', 'Z') << endl;
    cout << "Largest among 12.3f and 8.9f (float): " << findLargest(12.3f, 8.9f) << endl;
    return 0;
}
