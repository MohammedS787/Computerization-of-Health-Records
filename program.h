#include <bits/stdc++.h>
using namespace std;

class HeartRate
{
public:
    HeartRate(string, string, string, int, int, int, double, double);
    void setFirstName(string);
    void setLastName(string);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void setHeight(double);
    void setWeight(double);
    void setGender(string);
    void print();
    string getGender();
    string getFirstName();
    string getLastName();
    int getDay();
    int getMonth();
    int getYear();
    int getAge();
    double getHeight();
    double getWeight();
    int getMaximumHeartRate();
    double getTargetHeartRateFrom();
    double getTargetHeartRateTo();
    double getIBM();
    //
private:
    string first, last, gender;
    int day, month, year;
    double weight, height;
};
