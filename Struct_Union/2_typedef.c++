#include <iostream>
#include <string>
#include <vector>
using namespace std;

string SecondGreatLow(int arr[], int n)
{
  string str = " ";
  string str2 = " ";
  if (n == 2)
  {
    str = to_string(arr[0]);
    str2 = to_string(arr[1]);
    // str.append(str2);
    str.append(str2);
    // str = to_string(arr[0]);
    // str = to_string(arr[1]);
  }

  // code goes here
  return str;
}

int main(void)
{

  // keep this function call here
  int A[] = {4, 90};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << SecondGreatLow(A, arrLength);
  return 0;
}