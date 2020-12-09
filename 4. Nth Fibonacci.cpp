//TIME: O(1) , SPACE: O(1)
int getNthFib(int N) 
{
  return (pow((1 + sqrt(5)) / 2, N-1) - pow((1 - sqrt(5)) / 2, N-1)) / sqrt(5);
}

//TIME: O(2^N) , SPACE: O(N)
int getNthFib(int N) 
{
	if(N==1)
		return 0;
	else if(N==2)
		return 1;
	else
		return (getNthFib(N-1) + getNthFib(N-2));
}
