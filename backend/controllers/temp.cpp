#include <iostream>
#include <functional>
#include <algorithm>
  using namespace std;
 int main()
{

   int numbers[] = {3, -4, -5};

   transform(numbers, numbers + 5, numbers, negate<int>());

   for (int i = 0; i < 3; i++)

      cout << numbers[i] << " ";
}