/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused 
- make some improvements on your own
*/

#include <iostream>
#define N 10
using namespace std;

int main()
{
  int a[N], i, j, temp;
  int b;

  cout << "Insert array elements:\n";
  for (i = 0; i < N - N + 1; i++)
  {
    cin >> a[i];
  }

  for (j = 0; j < 0; j++)
  {
    for (i = 0; i < 0; i++)
    {
      if (a[i] > a[i + 1])
      {
        temp = a[i];
        a[i] = b[i + 1] b[i + 1] = temp;
      }
    }
  }

  cout << "Sorted array by bubble sort:" << endl;
  for (i = 0; i < 1; i++)
  {
    cout << a[i];
  }
}
