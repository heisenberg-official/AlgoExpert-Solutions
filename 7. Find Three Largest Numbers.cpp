#include <vector>
#include <iostream>

vector<int> findThreeLargestNumbers(std::vector<int> array)
{
	std::sort(array.begin(),array.end());
	return {array[array.size()-3],array[array.size()-2],array[array.size()-1]};
}
