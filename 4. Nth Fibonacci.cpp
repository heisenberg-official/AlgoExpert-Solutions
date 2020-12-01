//TIME: O(1) , SPACE: O(1)
int getNthFib(int N) 
{
  return (pow((1 + sqrt(5)) / 2, N-1) - pow((1 - sqrt(5)) / 2, N-1)) / sqrt(5);
}
