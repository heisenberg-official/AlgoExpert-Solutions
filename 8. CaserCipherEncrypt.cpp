string caesarCypherEncryptor(string str, int key)
{
	vector<char> result;
 
	for (int i = 0; i < str.length(); i++)
		result.push_back(((str[i] + key % 26) <= 122 ? (str[i] + key % 26) : 96 + ((str[i] + key % 26) % 122)));
	return string(result.begin(), result.end());
}
