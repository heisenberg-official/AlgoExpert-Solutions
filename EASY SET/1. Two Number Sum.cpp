std::vector<int> twoNumberSum(std::vector<int> array, int targetSum)
{
	for (int i = 0; i < array.size(); i++)
		for (int j = i+1; j < array.size(); j++)
			if (array[i] + array[j] == targetSum)
				return std::vector<int>{array[i],array[j]};
	return {};
}
