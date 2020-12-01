// TIME: O(N^2) , SPACE: O(N)

std::vector<std::vector<int>> threeNumberSum(std::vector<int> array, int targetSum) 
{
	std::vector<std::vector<int>> x{};
	std::sort(array.begin(), array.end());
	for (int i = 0; i < array.size(); i++)
	{
		int left = i+1, right = array.size()-1;
		while (left < right)
		{
			if ((array[i] + array[left] + array[right]) == targetSum)
			{
				x.push_back({ array[i],array[left],array[right] });
				left++; right--;
			}
			else if ((array[i] + array[left] + array[right]) < targetSum)
				left++;
			else if ((array[i] + array[left] + array[right]) > targetSum)
				right--;
		}
	}
	return x;
}
