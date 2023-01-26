#include "header.h"

int main() {
  vector<int> userNums;

  fillVector(userNums);
  cout << "Size: " << userNums.size() << endl;

  // task 1: define and call a function that finds the     smallest and largest
  // values in the vector

  // find smallest value in vector
  cout << "The smallest value in the vector: " << findMin(userNums) << endl;

  // find the largest value in vector
  cout << "The largest value in the vector: " << findMax(userNums) << endl;

  // task 2: convert to the 3 file format
  return 0;
}
