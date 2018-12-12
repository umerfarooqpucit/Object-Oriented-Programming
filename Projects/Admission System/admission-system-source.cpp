#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<Windows.h>
using namespace std;
class student
{
	string name;
	string fName;
	string address;
	string phone;
	long long cnic;
	int matricMarks;
	int interMarks;
	double gCgpa;
	int eTMarks;
	char hafiz;
	char interview;
	bool isEligible;
	long double merit;
public:
	student(){}
	student(string n, string fN, string ad, string pN, long long id, int mM, int iM, double gpa, int eM, char h, char iV){
		name = n; fName = fN;
		address = ad;
		phone = pN;
		cnic = id;
		matricMarks = mM;
		interMarks = iM;
		gCgpa = gpa;
		eTMarks = eM;
		hafiz = h;
		interview = iV;
	}
	string getName(){
		return name;
	}
	string getFName(){
		return fName;
	}
	string getAddress(){
		return address;
	}
	string getPhone(){
		return phone;
	}
	long long getCnic(){
		return cnic;
	}
	int getMMarks(){
		return matricMarks;
	}
	int getIMarks(){
		return interMarks;
	}
	double getCgpa(){
		return gCgpa;
	}
	int getEMarks(){
		return eTMarks;
	}
	char getHafiz(){
		return hafiz;
	}
	char getInterview(){
		return interview;
	}
	bool getIsEligible(){
		return isEligible;
	}
	double getMerit(){
		return merit;
	}
	void checkEligible(){
		if ((matricMarks / 1050 * 100) >= 60 && (interMarks / 1100 * 100) >= 60 && gCgpa >= 3.0 && interview == 'y'){
			isEligible = true;
		}
		else{
			isEligible = false;
		}
	}
	void calcMerit(){
		if (isEligible){
			if (hafiz == 'y'){
				merit = 100 * (((matricMarks / 4.0) + (interMarks / 5.0) + (gCgpa * 200) + 20 + eTMarks) / ((1050 / 4.0) + (1100 / 5.0) + 800 + 35));
			}
			else{
				merit = 100 * (((matricMarks / 4.0) + (interMarks / 5.0) + (gCgpa * 200) + eTMarks) / ((1050 / 4.0) + (1100 / 5.0) + 800 + 35));
			}
		}
		else{
			merit = 0.0;
		}
	}


};
int main()
{
	string name, fName, add, ph;
	long long id;
	int matric, inter, entry;
	char iV, haf, again;
	double gpa;
	fstream file("Student data.txt", ios::in | ios::out | ios::app);
	do{
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); cout << "			" << char(201); 
		 for (int i = 0; i<35; i++){ cout << char(205); }
		 cout << char(187) << endl << "			" << char(186);
		 cout << "	   Punjab University	    ";
		 cout << char(186) << endl << "			" << char(186);
		 cout << " College of Information Technology " << char(186) << endl << "			" << char(186);
		 cout << "	   Admission Branch	    " << char(186) << endl << "			" << char(200);
		 for (int i = 0; i<35; i++){ cout << char(205); }
		 cout << char(188);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		cout << "\n\nStudent Data Entry." << endl;
		cout << "\n\nName: ";
		getline(cin, name);
		cout << "\nFather Name: ";
		getline(cin, fName);
		cout << "\nAddress: ";
		getline(cin, add);
		cout << "\nPhone Number: ";
		cin >> ph;
		cout << "\nCnic: ";
		cin >> id;
		cout << "\nMatric marks: ";
		cin >> matric;
		cout << "\nInter Marks: ";
		cin >> inter;
		cout << "\nCGPA: ";
		cin >> gpa;
		cout << "\nEntry test marks: ";
		cin >> entry;
		cout << "\nHafiz-e-Quran [y/n]: ";
		cin >> haf;
		cout << "\nInterview passed [y/n]: ";
		cin >> iV;
		student s1(name, fName, add, ph, id, matric, inter, gpa, entry, haf, iV);
		s1.checkEligible();
		s1.calcMerit();
		file.write(reinterpret_cast<char*>(&s1), sizeof(s1));
		cout << "Data is Updated successfully" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << endl << endl << "Do you want to enter again [y/n]: ";
		cin >> again;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		system("cls");
	} while (again == 'y');
	file.close();
	file.open("Student data.txt", ios::in | ios::out);
	student s2;
	int i = 0;
	string name1[20];
	string fName1[20];
	double merit1[20];
	while (!file.eof()){
		file.read(reinterpret_cast<char*>(&s2), sizeof(s2));
		name1[i] = s2.getName();
		fName1[i] = s2.getFName();
		merit1[i] = s2.getMerit();
		i++;
	}
	cout << s2.getName() << endl<<s2.getMerit()<<endl;
	cout << name1[0] << endl;
	_getch();
}