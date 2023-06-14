#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <ctime>
#include <sstream>
#include <vector>
#include <string>
#include <unistd.h>
#include <algorithm>

typedef std::string string;
typedef std::vector<int> vector;
typedef std::list<int> list;

class PMerge {
	private:
		vector	_Vec;
		list	_List;
	public:
		PMerge( void );
		PMerge( char **, int );
		PMerge( PMerge const& );
		PMerge	operator=( PMerge const& );
		void	FillCont( char ** );
		~PMerge( void );
};

void	ft_error( string str );

template <typename T> 
void mergeTemp(T& arr, int left, int mid, int right){
	int n1 = mid - left + 1;
    int n2 = right - mid;

    T L(n1);
    T R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

template <typename T>
void mergeSortTemp(T& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSortTemp(arr, left, mid);
        mergeSortTemp(arr, mid + 1, right);

        mergeTemp(arr, left, mid, right);
    }
}

#endif