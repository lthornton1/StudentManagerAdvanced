#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class student
{
  private:
    string first;
    string last;
    double score = 0;
    vector<double> grades;

  public:
    void addGrade(double);
    double getScore();
    void setName(string,string);
    string fullName();

};

#endif
