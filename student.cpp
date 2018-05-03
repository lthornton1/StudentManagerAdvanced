#include "student.h"
#include<iostream>

void student::setName(string fname, string lname)
{
  first = fname;
  last = lname;
}

string student::fullName()
{
  string str;

  str.append(first);
  str.append(" ");
  str.append(last);
  
  return str;
}

void student::addGrade(double grade)
{
  grades.push_back(grade);
}

double student::getScore()
{
  double temp;
  if (grades.size() != 0)
  {
    for (int i=0; i<grades.size(); i++)
    {
      temp += grades[i];
    }

    temp /= grades.size();

    return temp;
  }
  else
  {
    return score;
  }
}
