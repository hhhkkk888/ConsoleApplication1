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
	
}

#include <iostream>

using namespace std;

void myfunc(void)
{
	cout << "myfunc(void) called" << endl;
}

void myfunc(char c)
{
	cout << "myfunc(char c) called" << endl;
}

void myfunc(int a, int b)
{
	cout << "myfunc(int a,int b) called" << endl;
}

int main(void)
{
	myfunc();
	myfunc('A');
	myfunc(12, 13);
	return 0;
}

#include <iostream>

using namespace std;

void  swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int num1 = 20;
	int num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;
	char ch1 = 'A';
	char ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111;
	double dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout<< dbl1 << ' ' << dbl2 << endl;

	 
	return 0;
}

#include <iostream>

using namespace std;

int adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	cout << adder() << endl;
	cout << adder(5) << endl;
	cout << adder(3, 5) << endl;
	return 0;
}

#include <iostream>

using namespace std;

int adder(int num1 = 1, int num2 = 2);

int main(void)
{
	cout << adder() << endl;
	cout << adder(5) << endl;
	cout << adder(3, 5) << endl;
	return 0;
}

int adder(int num1, int num2)
{
	return num1 + num2;
}

#include <iostream>

using namespace std;

int boxvolume(int lenght, int width = 1, int height = 1);

int main(void)
{
	cout << "[3,3,3]" << boxvolume(3, 3, 3) << endl;
	cout << "[5,5,D]" << boxvolume(5, 5) << endl;
	cout << "[7,D,D]" << boxvolume(7) << endl;
	//cout << "[D,D,D]" << boxvolume() << endl;
	return 0;
}

int boxvolume(int lenght, int width, int height)
{
	return lenght * width * height;
}

#include <iostream>

using namespace std;

int boxvolume(int length, int width, int height)
{
	return length * width * height;
}
int boxvolume(int lenght, int width)
{
	return lenght * width * 1;
}
int boxvolume(int lenght)
{
	return lenght * 1 * 1;
}

int main(void)
{
	cout << "[3,3,3]" << boxvolume(3, 3, 3) << endl;
	cout << "[5,5,D]" << boxvolume(5, 5) << endl;
	cout << "[7,D,D]" << boxvolume(7) << endl;
	//cout << "[D,D,D]" << boxvolume() << endl;
	return 0;
}
*/
