#include "header.h"

void fillVector(vector<int>& vec) {
  int nums;

  for (int i = 0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> nums;
    vec.push_back(nums);
  }
}

int findMin(vector<int>& vec) {
  int min = vec.at(0);
  for (int i = 0; i < vec.size(); i++) {
    if (vec.at(i) < min) {
      min = vec.at(i);
    }
  }
  return min;
}

int findMax(vector<int>& vec) {
  int max = vec.at(0);
  for (int i = 0; i < vec.size(); i++) {
    if (vec.at(i) > max) {
      max = vec.at(i);
    }
  }
  return max;
}