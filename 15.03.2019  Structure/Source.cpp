#include<iostream>
#include<iomanip>
#include<iostream>
#include<fstream>

using namespace std;

struct Student
{
	char name[30];

	char surname[30];

	int age;

	int grades[5];

	int fot;

	float sum;

	void sum1()
	{
		sum = 0;
		for (size_t i = 0; i < 5; i++)
		{
			sum = sum + grades[i];
		}
		sum = sum / 5;
		if (sum >= 4)
		{
			fot = 1;
		}
		else
			fot = 0;
	}

	void print()
	{
		sum = 0;
		cout << name << " " << surname << " " << age << endl;
		for (size_t i = 0; i < 5; i++)
		{
			cout << grades[i] << " ";

		}
		cout << endl;
	}

};

struct Bilet
{
	char marshrut[30];

	char time[10];

	char date[20];

	int money;

	void print()
	{
		cout << marshrut << " " << time << " " << date << " " << money << endl;
	}


};

int main()
{
	ifstream in_file("in_bilet.txt");
	int n;
	char date[20];
	int summa;

	if (!in_file)
	{
		cout << "File open error" << endl;
	}
	else {
		in_file >> n;

		Bilet *bb;
		bb = new Bilet[n];

		for (size_t i = 0; i < n; i++)
		{
			in_file >> bb[i].marshrut >> bb[i].time >> bb[i].date >> bb[i].money;
		}
		
		for (size_t i = 0; i < n; i++)
		{
			bb[i].print();
		}
		cout << "Poisk po date" << endl;
		cin >> date;
		for (size_t i = 0; i < n; i++)
		{
			if (!strcmp(date, bb[i].date))
			{
				bb[i].print();
			}

		}
		cout << "Summa" << endl;
		cin >> summa;
		for (size_t i = 0; i < n; i++)
		{
			if (summa > bb[i].money)
			{
				bb[i].print();
			}

		}
	}

	system("pause");
	return 0;
}





////////////////1/////////1////////////1/////////1
//using namespace std;
//
//struct Student
//{
//	char name[30];
//
//	char surname[30];
//
//	int age;
//
//	int grades[5];
//
//	int fot;
//
//	float sum;
//
//	void sum1()
//	{
//		sum = 0;
//		for (size_t i = 0; i < 5; i++)
//		{
//			sum = sum + grades[i];
//		}
//		sum = sum / 5;
//		if (sum >= 4)
//		{
//			fot = 1;
//		}
//		else
//			fot = 0;
//	}
//
//	void print()
//	{
//		sum = 0;
//		cout << name << " " << surname << " " << age << endl;
//		for (size_t i = 0; i < 5; i++)
//		{
//			cout << grades[i] << " ";
//
//		}
//		cout << endl;
//	}
//
//};
//
//int main()
//{
//	ifstream in_file("in.txt");
//	int n;
//
//	if (!in_file)
//	{
//		cout << "File open error" << endl;
//	}
//	else {
//		in_file >> n;
//
//		Student *ss;
//		ss = new Student[n];
//
//		for (size_t i = 0; i < n; i++)
//		{
//			in_file >> ss[i].name >> ss[i].surname >> ss[i].age;
//			for (size_t j = 0; j < 5; j++)
//			{
//				in_file >> ss[i].grades[j];
//			}
//
//		}
//
//		for (size_t i = 0; i < n; i++)
//		{
//			ss[i].print();
//		}
//
//		cout << "Otlichniki:" << endl;
//		for (size_t i = 0; i < n; i++)
//		{
//			ss[i].sum1();
//
//			if (ss[i].fot == 1)
//			{
//				cout << ss[i].name << " " << ss[i].surname << endl;
//			}
//		}
//		cout << "Dvoichniki:" << endl;
//		for (size_t i = 0; i < n; i++)
//		{
//			ss[i].sum1();
//
//			if (ss[i].fot == 0)
//			{
//				cout << ss[i].name << " " << ss[i].surname << endl;
//			}
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}