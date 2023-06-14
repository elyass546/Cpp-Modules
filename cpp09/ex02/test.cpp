#include "PmergeMe.hpp"
#define MICRO 100000

int main() {
  std::vector<int> vec;// = {38, 27, 43, 3, 9, 82, 10};
  std::list<int> list;

  // Copy elements from vector to array
  vec.push_back(38);
  vec.push_back(27);
  vec.push_back(43);
  vec.push_back(300);
  vec.push_back(-3);
  vec.push_back(9);
  vec.push_back(82);
  vec.push_back(10);
  std::vector<int> arr(vec);

  std::copy(vec.begin(), vec.end(), list.begin());
	/****************************/
	clock_t vecStartTime = std::clock();

	/****************************/
  // Sort the vector using merge sort
  mergeSortTemp(arr, 0, vec.size() - 1);

  clock_t vecEndTime = std::clock();
  double duration = static_cast<double>(vecEndTime - vecStartTime) / static_cast<double>(CLOCKS_PER_SEC) * MICRO;
	/****************************/

  std::cout << "Original vector: ";
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
      std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  std::cout << "Sorted vector: ";
  for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
      std::cout << (*it) << " ";
  }
  std::cout << std::endl;


  std::cout << "Sorted list: ";
  for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
      std::cout << (*it) << " ";
  }
  std::cout << std::endl;

  std::cout  << "Time to process a range of " << vec.size() << " elements with std::vector<int> : " << duration << std::endl;
  return 0;
}