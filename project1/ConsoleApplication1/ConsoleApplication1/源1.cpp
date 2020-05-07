
#include <iostream>
#include <list>
#include <bitset>
#include <iomanip>

using namespace std;

//递归输出二进制函数
void BinaryRecursion(int n)
{
	int a;
	a = n % 2; // 取余
	n = n >> 1;  //右移一位 相当于除以2
	if (0 != n)
	{
		BinaryRecursion(n);
	}
	cout << a;
}

//使用容器转换二进制
void BinaryVector(int n)
{
	int temp;
	temp = n;
	list <int> L;
	while (0 != temp)
	{
		L.push_front(temp % 2);
		temp = temp >> 1;
	}

	for (list <int>::iterator iter = L.begin(); iter != L.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
}

//一般方法，32位，逐步与1做与运算
void Binarycout(int n)
{
	for (int i = 31; i >= 0; i--)
	{
		cout << ((n >> i) & 1);
	}

	cout << endl;
}

//使用bitset转换二进制
void BinaryBitset(int n)
{
	cout << bitset<sizeof(int) * 8>(n) << endl;
}

int main()
{
	int a = 1045, b = 2;
	int c;
	c =1000000000;


	cout << setw(20) << "BinaryBitset(" << c << "):";
	BinaryBitset(c);

	return (0);
}