#include <iostream>
using namespace std;

void
bar_chart (double values[], int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < values[i]; ++j) {
      cout << '*';
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cout << "Enter number of lines: ";
  cin >> n;
  double values[n];
  for (int i = 0; i < n; ++i) {
    cout << "Enter value for value" << "[" << i << "]: ";
    cin >> values[i];
  }
  bar_chart(values, n);
  return 0;
}
