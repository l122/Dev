#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(11);
	v.push_back(20);
	v.push_back(99);
	// find even
	std::vector<int>::iterator it = std::find_if(v.begin(), 
	v.end(), [](int i){
		return !(i % 10);
	});
	std::cout << "Even is " << *it 
				<< ", capacity = " << v.capacity() 
				<< ", size = " << v.size()
				<< ", max_size = " << v.max_size()
				<< std::endl;
}
