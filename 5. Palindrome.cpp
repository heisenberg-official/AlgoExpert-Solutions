bool isPalindrome(std::string str)
{
	std::string x = str;
	std::reverse(x.begin(), x.end());
	if (x == str)
		return true;
	else
		return false;
}

// TIME: O(N), SPACE: O(1)
bool isPalindrome(std::string str)
{
	int left = 0, right = str.length() - 1;
	while(left < right)
		if(str[left] != str[right])
			return false;
		else
		{
			left++;
			right--;
		}
	return true;
}
