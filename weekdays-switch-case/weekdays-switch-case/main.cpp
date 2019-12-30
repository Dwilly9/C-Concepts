//
//  main.cpp
//  weekdays-switch-case
//
//  Created by Daniel Williams on 10/4/17.
//  Copyright © 2017 Daniel Williams. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int dayOfWeek;                     // holds the day of the week as an integer value
                                        // 1 -> Sund, 2-> Mon, 3 -> Wed, etc,
    int numWeekdaysRemaning = 5;            // this value will include the current day
                                        // this value will include the current day
    bool dayOfweekIsValid = true;       // Flag to tell whether the input is valid, is set to false when input is invalid
    
    cout << "Enter the current day as an integer (1 for Sunday, 2 for Monday, and so on: ";
    cin >> dayOfWeek;
    
    switch (dayOfWeek)
    {
        case 1:                       // Sunday or
        case 2:                       // Monday
            numWeekdaysRemaning = 5;
            break;
        case 3:                       // Tuesday
            numWeekdaysRemaning = 4;
            break;
        case 4:                       // Wednesday
            numWeekdaysRemaning = 3;
            break;
        case 5:                       // Thursday
            numWeekdaysRemaning = 2;
            break;
        case 6:                       // Friday
            numWeekdaysRemaning = 1;
            break;
        case 7:                       // Saturday
            numWeekdaysRemaning = 0;
            break;
        default:                      // An invalid number was given
            cout << "Expected a number between 1 and 7\n";
            dayOfweekIsValid = false;
    }
    
    if (dayOfweekIsValid)
        cout << "There are " << numWeekdaysRemaning << " weekday(s) remaining.\n";
    
    return 0;
}
