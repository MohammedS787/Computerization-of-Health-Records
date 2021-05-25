#include "program.h"

HeartRate::HeartRate(string fname, string lname, string g,
                     int d, int m, int y,
                     double h, double w)
{
    setFirstName(fname);
    setLastName(lname);
    setDay(d);
    setMonth(m);
    setYear(y);
    setWeight(w);
    setHeight(h);
    setGender(g);
}

void HeartRate::print()
{
    cout << "The user name is: " << getLastName() << ", " << getFirstName() << endl
         << "The Gender is: " << getGender() << endl
         << "Height: " << getHeight() << " Weight: " << getWeight() << endl
         << "Date of birth: " << getDay() << " / " << getMonth() << " / " << getYear() << endl
         << "His/Her age: " << getAge() << endl
         << "your maximum heart rate in beats per minute is: " << getMaximumHeartRate() << endl
         << "His/Her Target Heart Rate from " << getTargetHeartRateFrom()
         << " To " << getTargetHeartRateTo() << endl;

    cout << "Your BMI is: " << getIBM() << endl
         << endl;
    cout << "BMI VALUES" << endl
         << "Underweight: less than 18.5" << endl
         << "Normal: betweeen 18.5 and 24.9" << endl
         << "Overweight: between 25 and 29.9" << endl
         << "Obese: 30 or greater" << endl;
}

double HeartRate::getTargetHeartRateTo()
{
    return 0.85 * getMaximumHeartRate();
}

double HeartRate::getTargetHeartRateFrom()
{
    return 0.5 * getMaximumHeartRate();
}

int HeartRate::getMaximumHeartRate()
{
    return 220 - getAge();
}

int HeartRate::getAge()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int this_year = 1900 + ltm->tm_year;
    return this_year - year;
}

string HeartRate::getFirstName() { return first; }
string HeartRate::getLastName() { return last; }
string HeartRate::getGender() { return gender; }
int HeartRate::getDay() { return day; }
int HeartRate::getYear() { return year; }
int HeartRate::getMonth() { return month; }
double HeartRate::getHeight() { return height; }
double HeartRate::getWeight() { return weight; }
double HeartRate::getIBM() { return weight / pow(height, 2); }

void HeartRate::setFirstName(string fname)
{
    first = fname;
}
void HeartRate::setLastName(string lname)
{
    last = lname;
}
void HeartRate::setDay(int d)
{
    day = d;
}
void HeartRate::setMonth(int m)
{
    month = m;
}
void HeartRate::setYear(int y)
{
    year = y;
}
void HeartRate::setWeight(double w)
{
    weight = w;
}
void HeartRate::setHeight(double h)
{
    height = h;
}
void HeartRate::setGender(string g)
{
    gender = g;
}