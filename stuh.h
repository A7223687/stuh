#ifndef STUCARD_H
#define STUCARD_H
#include <string>
#include <fstream>
using namespace std;

class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
public:
	StuCard();
	StuCard(string,bool,double*);
	
	void setName(string);
	void setSex(bool);
	void setScore(int, double*);
	string getName();
	bool getSex();
	double getScore(int);
	double average();
	void printCard();
	void readFromFile(fstream&);
	void writeToFile(fstream&);
};
#endif
