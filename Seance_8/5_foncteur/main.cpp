#include <iostream>
#include <vector>
#include <algorithm>
#include "Time.hpp"
#include "TimeComparator.hpp"
#include "SwitchSummerTime.hpp"

using namespace std;

int main() {
    vector<Time> times;

    times.push_back(Time(10, 30));
    times.push_back(Time(9, 15));
    times.push_back(Time(11, 45));

    // Utilisation du foncteur TimeComparator pour trier les objets Time
    sort(times.begin(), times.end(), TimeComparator());

    cout << "Horaires triés avant le passage à l'heure d'été : " << endl;
    for (const Time& t : times) 
    {
        cout << t.getHours() << ":" << t.getMinutes() << endl;
    }

    // Appel du foncteur SwitchSummerTime pour avancer d'une heure (simulant l'heure d'été)
    for_each(times.begin(), times.end(), SwitchSummerTime());

    cout << "\nHoraires triés après le passage à l'heure d'été : " << endl;
    for (const Time& t : times) 
    {
        cout << t.getHours() << ":" << t.getMinutes() << endl;
    }

    return 0;
}
