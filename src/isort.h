#ifndef _ISORT_H_ 
#define _ISORT_H_ 

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename Record>
void insertion_sort_ind(std::vector<Record> & vec)
{
	Record t;
	for(int i = 0; i < vec.size(); i++)
		for(int j = i; j > 0; j--)
			if(vec[j] < vec[j-1])
			{
				t = vec[j-1];
				vec[j-1] = vec[j];
				vec[j] = t;
			}
}

// Verzija koja uzima raspon iteratora -- koristiti samo std::next i std::prev
template <typename Iter>
void insertion_sort(Iter first, Iter last) 
{
	for(auto i = first; i != last; i++)
		for(auto j = i; j != first; j--)
			if(*j < *prev(j))
			{
				auto t = *prev(j);
				*prev(j) = *j;
				*j = t;
			}
}

// verzija sa algoritmima rotate i upper_bound
template <typename Iter>
void insertion_sort1(Iter first, Iter last)
{
	for(auto i = first; i != last; i++)
		rotate(upper_bound(first, i, *i), i, i+1);
}


#endif