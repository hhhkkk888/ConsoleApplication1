/* //1-1
#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello " << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번쨰 숫자 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과:" << result << std::endl;
	return 0;
}

#include <iostream>

int main(void)
{
	int val1, val2;
	int result=0;
	std::cout << "두 개의 숫자 입력";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;

}
#include <iostream>

using namespace std;

int main(void)
{
	char name[100];
	char lang[200];

	cout << "이름은 무엇입니까: ";
	cin >> name;

	cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	cin >> lang;

	cout << "내 이름은 " << name << "입니다." << endl;
	cout << "제일 좋아하는 언어는 " << lang << "입니다." << endl;
	return 0;
}


#include <iostream>

using namespace std;

int main(void)
{
	int num = 0;
	int result = 0;
	for(int i = 0; i < 5; i++)
	{
		cin >> num;
		result += num;
	}
	cout << result;
	return 0;
}

#include <iostream>
using namespace std;
int main(void)
{
	char name[20];
	char number[20];
	cin >> name;
	cin >> number;
	cout << name << ' ' << number << endl;
	return 0;
}

#include <iostream>

using namespace std;

int main(void)
{
	int num;
	int result;
	cin >> num;
	for (int i = 1; i < 10; i++)
	{
		result = num * i;
		cout << num << "*" << i << "=" << result << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(void)
{
	int num=0;
	int result=0;
	while (num!=-1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		cin >> num;
		if (num == -1)
			break;

		result = 50 + num * 0.12;
		cout << result << endl;
	}
	return 0;
	
}*/

