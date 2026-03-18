#include<iostream>
using namespace std;

class CPoly {
protected:
	int wid = 0;
	int hig = 0;
public:
	CPoly() {
		wid = 0;
		hig = 0;
	}
};

class CRect : public CPoly {
public:
	CRect(int w, int h) {
		hig = h;
		wid = w;
	}
	int Area() {
		return wid * hig;
	}
};

class CTri : public CPoly {
public:
	CTri(int w, int h) {
		hig = h;
		wid = w;
	}
	int Area() {
		return wid * hig / 2;
	}

};

class CSqr : public CPoly {
public:
	CSqr(int w) {
		hig = w;
		wid = w;
	}
	int Area() {
		return wid * hig;
	}
};

int main() {
	CRect r(3, 4);
	CTri t(3, 4);
	CSqr s(3);
	cout << "사각형의 넓이 : " << r.Area() << endl;
	cout << "삼각형의 넓이 : " << t.Area() << endl;
	cout << "정사각형 넓이 : " << s.Area() << endl;
	return 0;
}