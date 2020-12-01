// Solution One TIME: O(N^2) , SPACE: O(1)
std::vector<int> twoNumberSum(std::vector<int> array, int targetSum)
{
	for (int i = 0; i < array.size(); i++)
		for (int j = i+1; j < array.size(); j++)
			if (array[i] + array[j] == targetSum)
				return {array[i],array[j]};
	return {};
}

// Solution Two TIME: O(N.log(N)) , SPACE: O(1)
std::vector<int> twoNumberSum(std::vector<int> array, int targetSum)
{
	sort(array.begin(), array.end());
	int left = 0, right = array.size() - 1;
	while (left < right)
	{
		if ((array[left] + array[right]) == targetSum)
			return { array[left],array[right] };
		else if ((array[left] + array[right]) < targetSum)
			left++;
		else if ((array[left] + array[right]) > targetSum)
			right--;
	}
	return {};
}
