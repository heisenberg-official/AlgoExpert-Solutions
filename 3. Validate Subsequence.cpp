// TIME: O(N) , SPACE: O(1)
bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence)
{
	int arridx=0,seqidx=0;
	while(arridx < array.size() && seqidx < sequence.size())
	{
		if(array[arridx] == sequence[seqidx])
			seqidx++;
		arridx++;
	}
	
	return seqidx == sequence.size();
}
