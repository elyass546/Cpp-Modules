#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {};

PmergeMe::PmergeMe( char **av, int ac ) {

	for (int i = 1; i < ac; i += 1) {
		_vec.push_back(ft_stou(av[i]));
		_list.push_back(ft_stou(av[i]));
	}

	for (vector::iterator itr = _vec.begin(); itr != _vec.end(); itr++) {
		for (vector::iterator itr2 = itr + 1; itr2 != _vec.end(); itr2++) {
			if (*itr2 == *itr)
				ft_error("Duplicat number");
		}
	}
	std::cout << "Before: ";
	PrintVector(_vec);
	SortVector();
	sortList();
}

PmergeMe::PmergeMe(const PmergeMe& copy) {
	*this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& merge) {
	_list = merge._list;
	_vec = merge._vec;
	return (*this);
}

void PrintVector(vector& vec) {
	for (vector::iterator itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

vector MergeVectors(vector& left, vector& right)
{
	vector result;

	while (!left.empty() && !right.empty()) {
		if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else {
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty()) {
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

vector MergeInsertVector(vector& vec)
 {
	if (vec.size() <= 1)
		return vec;

	int mid = vec.size() / 2;

	vector left(vec.begin(), vec.begin() + mid);
	vector right(vec.begin() + mid, vec.end());

	left = MergeInsertVector(left);
	right = MergeInsertVector(right);

	return MergeVectors(left, right);
}

void PmergeMe::SortVector() {

	std::clock_t start = std::clock();
	_vec = MergeInsertVector(_vec);
	float duration = static_cast<float>(std::clock() - start) / static_cast<float>(CLOCKS_PER_SEC) * US;

	std::cout << "After: ";
	PrintVector(_vec);
	std::cout << "Time to process a range of " << _vec.size()
		<< " elements " << "with std::vector<unsigned int> : " 
		<< duration << " us" << std::endl;
}

void PrintList(list& lst)
{
	for (list::iterator itr = lst.begin(); itr != lst.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

list mergeLists(list& left, list& right)
{
	list result;

	while (!left.empty() && !right.empty()) {
		if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else {
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty()) {
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

list mergeInsertList(list& lst)
{
	if (lst.size() <= 1)
		return lst;

	int mid = lst.size() / 2;
	list left;
	list right;

	for (int i = 0; i < mid; i++) {
		left.push_back(lst.front());
		lst.pop_front();
	}
	right = lst;
	left = mergeInsertList(left);
	right = mergeInsertList(right);
	return mergeLists(left, right);
}

void PmergeMe::sortList() {

	std::clock_t start = std::clock();

	_list = mergeInsertList(_list);

	float duration = static_cast<float>(std::clock() - start) / static_cast<float>(CLOCKS_PER_SEC) * US;

	std::cout << "Time to process a range of " << _list.size()
		 << " elements " << "with std::list<unsigned int> : " 
		 << duration << " us" << std::endl;
}

PmergeMe::~PmergeMe(void) {};

