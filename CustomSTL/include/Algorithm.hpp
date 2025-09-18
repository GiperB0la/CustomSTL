#pragma once
#include "Vector.hpp"
#include "List.hpp"
#include "Forward_list.hpp"

namespace custom_std
{
	// find()

	template <typename T>
	typename custom_std::Vector<T>::iterator find(typename custom_std::Vector<T>::iterator beginIt, typename custom_std::Vector<T>::iterator endIt, T value)
	{
		for (typename custom_std::Vector<T>::iterator it = beginIt; it != endIt; it++) {
			if (*it == value) {
				return it;
			}
		}
		return nullptr;
	}

	template <typename T>
	typename custom_std::List<T>::iterator find(typename custom_std::List<T>::iterator beginIt, typename custom_std::List<T>::iterator endIt, T value)
	{
		for (typename custom_std::List<T>::iterator it = beginIt; it != endIt; it++) {
			if (*it == value) {
				return it;
			}
		}
		return nullptr;
	}

	template <typename T>
	typename custom_std::Forward_list<T>::iterator find(typename custom_std::Forward_list<T>::iterator beginIt, typename custom_std::Forward_list<T>::iterator endIt, T value)
	{
		for (typename custom_std::Forward_list<T>::iterator it = beginIt; it != endIt; it++) {
			if (*it == value) {
				return it;
			}
		}
		return nullptr;
	}

	// sort<>()

	template <typename T>
	void sort(typename custom_std::Vector<T>::iterator beginIt, typename custom_std::Vector<T>::iterator endIt)
	{
		for (typename custom_std::Vector<T>::iterator it = beginIt; it != endIt - 1; it++) {
			for (typename custom_std::Vector<T>::iterator it2 = it + 1; it2 != endIt; it2++) {
				if (*it > *it2) {
					T temp = *it;
					*it = *it2;
					*it2 = temp;
				}
			}
		}
	}

	template <typename T>
	void sort(typename custom_std::List<T>::iterator beginIt, typename custom_std::List<T>::iterator endIt)
	{
		for (typename custom_std::List<T>::iterator it = beginIt; it != endIt - 1; it++) {
			for (typename custom_std::List<T>::iterator it2 = it + 1; it2 != endIt; it2++) {
				if (*it > *it2) {
					T temp = *it;
					*it = *it2;
					*it2 = temp;
				}
			}
		}
	}

	template <typename T>
	void sort(typename custom_std::Forward_list<T>::iterator beginIt, typename custom_std::Forward_list<T>::iterator endIt)
	{
		for (typename custom_std::Forward_list<T>::iterator it = beginIt; it != endIt - 1; it++) {
			for (typename custom_std::Forward_list<T>::iterator it2 = it + 1; it2 != endIt; it2++) {
				if (*it > *it2) {
					T temp = *it;
					*it = *it2;
					*it2 = temp;
				}
			}
		}
	}

	// rotate<>()

	template <typename T>
	void rotate(typename custom_std::Vector<T>::iterator beginIt, typename custom_std::Vector<T>::iterator beginItSecond, typename custom_std::Vector<T>::iterator endIt)
	{
		typename custom_std::Vector<T> arr;

		for (typename custom_std::Vector<T>::iterator it = beginIt; it != beginItSecond; it++) {
			arr.push_back(*it);
		}

		int i = 0;
		for (typename custom_std::Vector<T>::iterator it = beginIt; it != endIt; it++) {
			if (beginItSecond == endIt) {
				*it = arr.at(i);
				i++;
			}
			else {
				*it = *beginItSecond;
				beginItSecond++;
			}
		}
	}

	template <typename T>
	void rotate(typename custom_std::List<T>::iterator beginIt, typename custom_std::List<T>::iterator beginItSecond, typename custom_std::List<T>::iterator endIt)
	{
		typename custom_std::Vector<T> arr;

		for (typename custom_std::List<T>::iterator it = beginIt; it != beginItSecond; it++) {
			arr.push_back(*it);
		}

		int i = 0;
		typename custom_std::List<T>::iterator it = beginIt;
		bool f = true;
		for (it = beginIt; it != endIt; it++) {
			if (beginItSecond == endIt) {
				if (f) {
					*it = *beginItSecond;
					f = false;
					continue;
				}
				*it = arr.at(i);
				i++;
			}
			else {
				*it = *beginItSecond;
				beginItSecond++;
			}
		}
		*it = arr.at(i);
	}

	template <typename T>
	void rotate(typename custom_std::Forward_list<T>::iterator beginIt, typename custom_std::Forward_list<T>::iterator beginItSecond, typename custom_std::Forward_list<T>::iterator endIt)
	{
		typename custom_std::Vector<T> arr;

		for (typename custom_std::Forward_list<T>::iterator it = beginIt; it != beginItSecond; it++) {
			arr.push_back(*it);
		}

		int i = 0;
		typename custom_std::Forward_list<T>::iterator it = beginIt;
		bool f = true;
		for (it = beginIt; it != endIt; it++) {
			if (beginItSecond == endIt) {
				if (f) {
					*it = *beginItSecond;
					f = false;
					continue;
				}
				*it = arr.at(i);
				i++;
			}
			else {
				*it = *beginItSecond;
				beginItSecond++;
			}
		}
		*it = arr.at(i);
	}

	// copy<>()

	template <typename T>
	void copy(typename custom_std::Vector<T>::iterator beginIt, typename custom_std::Vector<T>::iterator endIt, typename custom_std::Vector<T>::iterator beginItSecond)
	{
		for (typename custom_std::Vector<T>::iterator it = beginIt, it2 = beginItSecond; it != endIt; it++, it2++) {
			*it2 = *it;
		}
	}

	template <typename T>
	void copy(typename custom_std::List<T>::iterator beginIt, typename custom_std::List<T>::iterator endIt, typename custom_std::List<T>::iterator beginItSecond)
	{
		for (typename custom_std::List<T>::iterator it = beginIt, it2 = beginItSecond; it != endIt; it++, it2++) {
			*it2 = *it;
		}
	}

	template <typename T>
	void copy(typename custom_std::Forward_list<T>::iterator beginIt, typename custom_std::Forward_list<T>::iterator endIt, typename custom_std::Forward_list<T>::iterator beginItSecond)
	{
		for (typename custom_std::Forward_list<T>::iterator it = beginIt, it2 = beginItSecond; it != endIt; it++, it2++) {
			*it2 = *it;
		}
	}
}