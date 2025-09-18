#include "include/Array.hpp"
#include "include/Vector.hpp"
#include "include/List.hpp"
#include "include/Forward_list.hpp"
#include "include/Deque.hpp"
#include "include/String.hpp"
#include "include/Memory.hpp"
#include "include/Unordered_map.hpp"
#include "include/Unordered_set.hpp"


int main()
{
	custom_std::Array<int, 4> Array = { 5, 3, 4, 9 };
	custom_std::Vector<int> Vector = { 5, 3, 4, 9 };
	custom_std::List<int> List = { 5, 3, 4, 9 };
	custom_std::Forward_list<int> Forward_list = { 5, 3, 4, 9 };
	custom_std::Deque<int> Deque = { 5, 3, 4, 9 };
	custom_std::String String = "Hello, World!";
	custom_std::Auto_ptr<int> Auto_ptr = new int(10);
	custom_std::Unique_ptr<int> Unique_ptr = new int(10);
	custom_std::Shared_ptr<int> Shared_ptr = new int(10);
	custom_std::Unordered_map<int, custom_std::String> Unordered_map;
	custom_std::Unordered_set<custom_std::String> Unordered_set;

	return 0;
}