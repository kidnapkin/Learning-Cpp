/*
	������� � ������ - 2

	N ������� ����� K ������� � ������ ��������� �� �������.����������, ������� ������� ��������� ����� ����, ��� ��� ������� ������� ���� ������ ���������� �������.

	������ ������� ������

	�� ���� ������ ��� ����� ������������� ����� N � K, ������ �� ������� �� ��������� 10000.

	������ �������� ������

	�������� ���� ����� ����� - ����� �� ������.

	Sample Input :
	3
	14
	Sample Output :
	2
*/

#include <iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	cout << K % N;
	return 0;
}