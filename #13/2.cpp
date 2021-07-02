#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {

protected:
	double convert(double src) {
		double result;
		result = src / ratio;
		return result;
	}
	string getSourceString() {
		string result1;
		result1 = "Km";
		return result1;
	}
	string getDestString() {
		string result2;
		result2 = "Mile";
		return result2;
	}
public:
	KmToMile(double ratio) : Converter(ratio) {};

};


int main() {

	KmToMile toMile(1.609344);
	toMile.run();

	return 0;
}