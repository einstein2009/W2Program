//W1 Program
//True/False test grading.
//Nick Ackors
//6/28/2016

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

double calcScore(char *key, char *testEntry);
void output(string id, char *testEntry, double score);

	//INCLUDE DYNAMIC ARRAY:
	//Entry example: ID= ABC54301 A= TFTFFTTFF TFFTFFTFTF

int main()
{	
	ifstream infile;	
	string id;
	char *key = new char[21];
	char *testEntry = new char[21];
	double testPoints;
	char ch;
	double score = 0;
	
	//open file, if it's not there then exit program.
	infile.open("testScores.txt");

	if (!infile)
	{
		cout << "This input file does not exist. " << endl;
		
		return 1;
	}
	
	infile >> key;
	infile >> id;
	cout << key << endl;
	
	
	//pull the information from the file
	while (infile)
	{
	
		
		infile.get(ch);
		infile.get(testEntry,21);
		infile.get(ch);
		output(id, testEntry, calcScore(key, testEntry));
		infile >> id;

	}
	
	infile.close();
	
return 0;
}

	//True = 2 points; False = -1 points; blank = 0 points
double calcScore(char *key, char *testEntry)
{
	double points = 0;
	
	for (int index = 0; index < 20; index++)
	{
		if (testEntry[index] == key[index])
			points+=2;
		else if(testEntry[index] !=key[index] && testEntry[index] != ' ')
			points-=1;
	//cout << "Checking:  Key=" << key[index] <<", Entry=" << testEntry[index]<<", score=" << points << ";\n";
	}
	
	return points;
}
	//Output = ID, Answers, Score, Grade.
	//90-100,A; 80-89.99, B; etc.
void output(string id, char *testEntry, double score)
{
	char grade;
	if(score >= 36)
		grade = 'A';
	else if(score >= 32)
		grade = 'B';
	else if(score >= 28)
		grade = 'C';
	else if(score >= 24)
		grade = 'D';
	else
		grade = 'F';

	cout << id << " " << testEntry << " " << score/40 * 100 << "%" << " " << grade << endl;	
}

