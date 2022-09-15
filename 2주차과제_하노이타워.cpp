#include <iostream> 
using namespace std;

int cnt = 0; // �̵� Ƚ���� �̿�.

void Hanoi(int n, char from, char temp, char to) 
// n : ���ݰ���, from : ���� ��ġ, temp : �ӽ� ���, to :������
{
	if (n < 1)
		cout << "ERROR! 1 �̻��� ���ڸ� �Է��Ͻÿ�." << endl;
	else if (n == 1) {
		cout << n << "�� ������ " << from << " ���� " << to << " �� �ű��. \n";
	}
	else {
		Hanoi(n - 1, from, to, temp);
		cout << n << "�� ������ " << from << " ���� " << to << " �� �ű��. \n";
		Hanoi(n - 1, temp, from, to);
	}

	cnt++;

}


void main()
{
	int n; //������ ��
	
	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n���� ������ 'A'���� 'C'�� �̵�

	if(n>=1)
		cout << "��ü ���� �̵� ��(���ݼ� : " << n << ") = " << cnt << endl;
}