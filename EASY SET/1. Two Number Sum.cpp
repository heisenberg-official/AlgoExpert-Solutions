// Vineet Kumar

// Solution One TIME: O(N^2) , SPACE: O(1)
std::vector<int> twoNumberSum(std::vector<int> array, int targetSum)
{
	for (int i = 0; i < array.size(); i++)
		for (int j = i+1; j < array.size(); j++)
			if (array[i] + array[j] == targetSum)
				return {array[i],array[j]};
	return {};
}
