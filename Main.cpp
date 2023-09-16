#include <iostream>
#include "DaysWeeks.h"
using namespace std;

int main() {
    Date date;
    Date date1;

    date.Input();
    cout << endl << "Original date1:";
    date.Print();
    cout << endl << endl;

    date1.Input();
    cout << endl << "Original date2:";
    date1.Print();
    cout << endl << endl;

    date + 15;
    cout << "Increases by 15 days: ";
    date.Print();

    cout << endl;

    date1 + 15;
    cout << "Increases by 15 days(data2): ";
    date1.Print();

    cout << endl;

    date - 15;
    cout << "Decreases for 15 days: ";
    date.Print();

    cout << endl;

    date1 - 15;
    cout << "Decreases for 15 days(data2): ";
    date1.Print();

    cout << endl;

    date + 250;
    cout << "Increases by 250 days: ";
    date.Print();

    cout << endl;

    date1 + 250;
    cout << "Increases by 250 days(data2): ";
    date1.Print();

    cout << endl;

    date - 250;
    cout << "Decreases by 250 days: ";
    date.Print();

    cout << endl;

    date1 - 250;
    cout << "Decreases by 250 days(data2): ";
    date1.Print();

    cout << endl;

    date + 1000;
    cout << "Increases by 1000 day: ";
    date.Print();

    cout << endl;

    date1 + 1000;
    cout << "Increases by 1000 day(data2): ";
    date1.Print();

    cout << endl;

    date - 1000;
    cout << "Decreases by 1000 day: ";
    date.Print();

    cout << endl;

    date1 - 1000;
    cout << "Decreases by 1000 day(data2): ";
    date1.Print();

    cout << endl;

    Date dateRez = date - date1;
    cout << "date - date2: ";
    dateRez.Print();

    cout << endl;

    date++;
    cout << "Increases by 1 day(date++): ";
    date.Print();

    cout << endl;

    date--;
    cout << "Decreases by 1 day(date--): ";
    date.Print();

    cout << endl;

    ++date;
    cout << "Increases by 1 day(++date): ";
    date.Print();

    cout << endl;

    --date;
    cout << "Decreases by 1 day(--date): ";
    date.Print();

    cout << endl;

    date += 2000;
    cout << "Increases by 2000 day: ";
    date.Print();

    cout << endl;

    date1 += 2000;
    cout << "Increases by 2000 day(data2): ";
    date1.Print();

    cout << endl;

    date -= 2000;
    cout << "Decreases by 2000 day: ";
    date.Print();

    cout << endl;

    date1 -= 2000;
    cout << "Decreases by 2000 day(data2): ";
    date1.Print();

    cout << endl;

    if (date < date1)
    {
        cout << "date < date1: ";
        cout << "True" << endl;
    }

    else
    {
        cout << "date < date1: ";
        cout << "False" << endl;
    }


    if (date > date1)
    {
        cout << "date > date1: ";
        cout << "True" << endl;
    }

    else
    {
        cout << "date > date1: ";
        cout << "False" << endl;
    }


    if (date <= date1)
    {
        cout << "date <= date1: ";
        cout << "True" << endl;
    }
    else
    {
        cout << "date <= date1: ";
        cout << "False" << endl;
    }


    if (date >= date1)
    {
        cout << "date >= date1: ";
        cout << "True" << endl;
    }

    else
    {
        cout << "date >= date1: ";
        cout << "False" << endl;
    }


    if (date == date1)
    {
        cout << "date == date1: ";
        cout << "True" << endl;
    }

    else
    {
        cout << "date == date1: ";
        cout << "False" << endl;
    }


    if (date != date1)
    {
        cout << "date != date1: ";
        cout << "True" << endl;
    }

    else
    {
        cout << "date != date1: ";
        cout << "False" << endl;
    }

}