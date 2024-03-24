#include <iostream>

using namespace std;
void Hanoi(int, char, char, char);
int
main()
{
	cout <<"\nHanoi tornyai 3 koronggal : \n \n";
	Hanoi(3, ' A', ' B', ' C');
	return 0;
}
void Hanoi(int N, char Honnan, char Mivel, char Hova)
{
	if (N>0)
	{
		Hanoi(N-1, Honnan, Hova, Mivel);
		cout << N << ". korongot tegye " << Honnan << " rudrol " << Hova << " rudra! \n";
		Hanoi(N-1, Mivel, Honnan, Hova);
	}
}