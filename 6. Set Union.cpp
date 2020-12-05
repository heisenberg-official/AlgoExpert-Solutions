std::vector<int> UNION(std::vector<int> X, std::vector<int> Y)
{
	std::vector<int> Z;
	std::sort(X.begin(), X.end());
	std::sort(Y.begin(), Y.end());

	std::unique(X.begin(), X.end());
	std::unique(Y.begin(), Y.end());

	std::set_union(begin(X), end(X),begin(Y), end(Y),std::inserter(Z, end(Z)));
	return Z;
}
