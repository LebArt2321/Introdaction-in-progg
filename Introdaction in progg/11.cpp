//#include<iostream>
//#include<math.h>
//using namespace std;
//1//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a == b) {
//		a = 0;
//		b = 0;
//	}
//	else{
//		if (a > b) b = a;
//		else a = b;
//	}
//	cout << a << " "<< b;
//}
//2//
//int main() {
//	double a, b, c, MIN;
//	cin >> a >> b >> c;
//	MIN = min(a, min(b, c));
//	cout << a + b + c - MIN;
//}
//3//
//int main() {
//	double x1, x2, x3, y1, y2, y3;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	double ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//	double ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
//	if (ab < ac) cout << "B - " << ab;
//	else cout << "C - " << ac;
//}
//4//
//int main() {
//	int x, y;
//	cin >> x >> y;
//	if (x > 0 && y > 0) cout << "1";
//	else if (x < 0 && y>0) cout << "2";
//	else if (x < 0 && y < 0) cout << "3";
//	else cout << "4";
//}
//5//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int x;
//	cin >> x;
//	if (x > 0) cout << "������������� ";
//	else if (x < 0) cout << "������������� ";
//	if (x % 2 == 0 && x != 0) cout << "������ ";
//	else if (x % 2 != 0 && x != 0)cout << "�������� ";
//	if (x == 0) cout << "������� ";
//	cout << "�����";
//}
//6//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int x;
//	cin >> x;
//	if (x % 2 == 0) cout << "׸���� ";
//	else cout << "�������� ";
//	if (x < 10) cout << "����������� ";
//	else if (x > 9 && x < 100) cout << "���������� ";
//	else cout << "���������� ";
//	cout << "�����";
//}

