//#include<iostream>
//#include<math.h>
//#include<vector>
//#include <Windows.h>
//using namespace std;
//1//
//int main() {
//  setlocale(LC_ALL, "rus");
//	int data, mounth;
//	cin >> data >> mounth;
//	vector <string> x = {"������", "������", "������", "���������", "�����", "������", "�������", "�������", "�������", "�������", "�����������" ,"�����������" , "�����������", "�������������", "�����������", "������������", "�����������", "�������������", "�������������", "���������", "�������� ������", "�������� ������", "�������� ������", "�������� ���������", "�������� �����", "�������� ������", "�������� �������", "�������� �������", "�������� �������", "���������", "�������� ������"};
//	vector <string> y = { "������", "�������", "�����", "������", "���", "����", "����", "�������", "��������", "�������", "������", "�������"};
//	cout << x[data - 1] << " " << y[mounth - 1];
//}
//2//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "rus");
//	char c; 
//	cin >> c;
//	int n;
//	cin >> n;
//	if (c == '�') {
//		if (n == 0)
//			cout << "�����";
//		else if (n == 1)
//			cout << "�����";
//		else cout << "������";
//	}
//	else if (c == '�') {
//		if (n == 0)
//			cout << "��";
//		else if (n == -1)
//			cout << "�����";
//		else cout << "������";
//	}
//	else if (c == '�') {
//		if (n == 0)
//			cout << "�����";
//		else if (n == -1)
//			cout << "�����";
//		else cout << "��";
//	}
//	else if (c == '�'){
//		if (n == 0)
//			cout << "������";
//		else if (n == 1)
//			cout << "�����";
//		else cout << "��";
//	}
//}
//3//
//int main() {
//	int x;
//	cin >> x;
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "rus");
//	vector <string> days = {"������", "����������", "����������", "����������", "������������", "����������", "����������� ", "����������", "������������", "������������", "��������", "�������� ����", "�������� ���", "�������� ���", "�������� ������", "�������� ����", "�������� �����", "�������� ����", "�������� ������", "�������� ������", "��������", "�������� ����", "�������� ���", "�������� ���", "�������� ������", "�������� ����", "�������� �����", "�������� ����", "�������� ������", "�������� ������", "�����"};
//	cout << days[x - 10];
//	if (x > 9 && x < 21) cout << " �������";
//	else if (x == 21 || x == 31) cout << " �������";
//	else if (x > 21 && x < 25) cout << " ������� ";
//	else if (x > 24 && x < 31) cout << " �������";
//	else if (x > 31 && x < 35) cout << " ������� ";
//	else if (x > 34 && x < 41) cout << " �������";
//}
//4//
//int main(void)
//{
//    int n;
//    cin >> n;
//    setlocale(LC_ALL, "rus");
//    switch (n / 100) {
//    case 1:
//        cout << "��� ";
//        break;
//    case 2:
//        cout <<"������ ";
//        break;
//    case 3:
//        cout << "������ ";
//        break;
//    case 4:
//        cout << "��������� ";
//        break;
//    case 5:
//        cout << "������� ";
//        break;
//    case 6:
//        cout << "�������� ";
//        break;
//    case 7:
//        cout << "������� ";
//        break;
//    case 8:
//        cout << "���������  ";
//        break;
//    case 9:
//        cout << "���������  ";
//        break;
//    }
//
//    if ((n % 100) / 10 == 1)
//        switch (n % 100) {
//        case 10:
//            cout << "������\n";
//            break;
//        case 11:
//            cout << "����������\n";
//            break;
//        case 12:
//            cout << "����������\n";
//            break;
//        case 13:
//            cout << "����������\n";
//            break;
//        case 14:
//            cout << "������������\n";
//            break;
//        case 15:
//            cout << "����������\n";
//            break;
//        case 16:
//            cout << "�����������\n";
//            break;
//        case 17:
//            cout << "����������\n";
//            break;
//        case 18:
//            cout << "������������\n";
//            break;
//        case 19:
//            cout << "������������\n";
//            break;
//        }
//    else {
//        switch ((n % 100) / 10) {
//        case 2:
//            cout <<"�������� ";
//            break;
//        case 3:
//            cout << "�������� ";
//            break;
//        case 4:
//           cout << "����� ";
//            break;
//        case 5:
//            cout << "��������� ";
//            break;
//        case 6:
//            cout << "���������� ";
//            break;
//        case 7:
//            cout << "��������� ";
//            break;
//        case 8:
//           cout << "����������� ";
//            break;
//        case 9:
//            cout << "��������� ";
//            break;
//        }
//
//        switch (n % 10) {
//        case 1:
//            cout << "����\n";
//            break;
//        case 2:
//            cout <<"���\n";
//            break;
//        case 3:
//           cout << "���\n";
//            break;
//        case 4:
//           cout << "������\n";
//            break;
//        case 5:
//            cout << "����\n";
//            break;
//        case 6:
//           cout << "�����\n";
//            break;
//        case 7:
//            cout << "����\n";
//            break;
//        case 8:
//            cout << "������\n";
//            break;
//        case 9:
//            cout <<"������\n";
//            break;
//        }
//    }
//    return 0;
//}
//5//
//int main(void)
//{
//    setlocale(LC_ALL, "rus");
//    int n;
//    cin >> n;
//    cout << "��� ";
//    switch ((n) % 10) {
//    case 0:
//    case 1:
//       cout << "���";
//        break;
//    case 2:
//    case 3:
//        cout << "����";
//        break;
//    case 4:
//    case 5:
//        cout << "����";
//        break;
//    case 6:
//    case 7:
//        cout << "�����";
//        break;
//    case 8:
//    case 9:
//        cout << "���";
//        break;
//    }
//
//    switch ((n + 1) % 5) {
//    case 0:
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//    case 9:
//    case 10:
//    case 11:
//        cout << "�� ";
//        break;
//    case 6:
//    case 7:
//    case 8:
//        cout << "��� ";
//        break;
//    }
//
//    switch ((n + 8) % 12) {
//    case 0:
//       cout << "�����\n";
//        break;
//    case 1:
//        cout << "������\n";
//        break;
//    case 2:
//        cout << "�����\n";
//        break;
//    case 3:
//        cout << "�����\n";
//        break;
//    case 4:
//        cout << "�������\n";
//        break;
//    case 5:
//        cout << "����\n";
//        break;
//    case 6:
//        cout << "������\n";
//        break;
//    case 7:
//        cout << "����\n";
//        break;
//    case 8:
//        cout << "��������\n";
//        break;
//    case 9:
//        cout << "������\n";
//        break;
//    case 10:
//        cout << "������\n";
//        break;
//    case 11:
//        cout << "������\n";
//        break;
//    }
//    return 0;
//}