bool isPalindrome(std::string str)
{
	std::string x = str;
	std::reverse(x.begin(), x.end());
	if (x == str)
		return true;
	else
		return false;
}

