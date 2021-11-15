#include <stdio.h>
#include<conio.h>
#include <iostream>
#include <string>



using namespace std;


int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	const int m = 5, k = 30;
	int n, i, j = 0, cnt = 0;
	bool sort = 1;
	struct STUDENT {
		char fio[k];
		int numb;
		int ball[m];
		double sum;

	};
	STUDENT buffer;
	std::cout << ("введите количество стукртур student: "); cin >> n;
	std::cout << endl;
	STUDENT* Student = new STUDENT[n];
	for (i = 0; i < n; i++)
	{
		Student[i].sum = 0;
		cout << ("Введите ФИО") << (i + 1);
		cout << ("студента"); cin.ignore(); cin.getline(Student[i].fio, k);
		cout << ("введите номер группы:"); cin >> Student[i].ball[j];
		cout << ("введите оценки") << endl;
		for (j = 0; j < m; j++)
		{
			cout << (j + 1) << ("оценка"); cin >> Student[i].ball[j];
			Student[i].sum += Student[i].ball[j];

		}
		Student[i].sum /= m;
		cout << endl;
		cout << ("средняя оценка") << Student[i].sum << endl;
		cout << endl;
	}
	while (sort) {
		sort = 0;
		for (i = 0; i < n - 1; i++)
			if (Student[i].numb > Student[i + 1].numb)
			{
				buffer = Student[i];
				Student[i] = Student[i + 1];
				Student[i + 1] = buffer;
				sort = 1;
			}
		cout << endl;
		cout << ("Список студентов упорядоченных по возрастанию номеров групп:\n\n");
		for (i = 0; i < n; i++)
		{
			cout << ("ФИО Студента") << Student[i].fio << endl;
			cout << ("номер группы") << Student[i].numb << endl;
			cout << ("Оценки") << endl;
			for (j = 0; j < m; j++) {
				cout << (j + 1) << ("оценка:") << Student[i].ball[j] << endl;
				cout << endl;
				cout << ("Средняя оценка:") << Student[i].sum << endl;
				cout << endl;

			}
			cout << ("\n Список студентов , чей среднний балл больше 3,7:") << endl << endl;
			for (i = 0; i < n; i++) {
				if (Student[i].sum > 3.7) {
					cout << ("ФИО Студента") << Student[i].fio << endl;
					cout << ("Номер группы") << Student[i].numb << endl;
					cnt++;
					cout << endl;


				}
			}

		}


	}


}

