//
//  main.cpp
//  dot-loop-examples
//
//  Created by Daniel Williams on 10/18/17.
//  Copyright © 2017 Daniel Williams. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
 
    int dotNumber, count, dotConstant = 0, i;
    
    cout << "Enter the number of rows of dots and columns of dots you want displayed: ";
    cin >> dotNumber;
    count = dotNumber;
    dotConstant = dotNumber;
    
    while (count > 0)
    {
        while (dotNumber > 0)
        {
            cout << ".";
            dotNumber--;
        }
        cout << endl;
        count--;
        dotNumber = dotConstant;
    }
    
    for (count=dotNumber; count>0; count--)
    {
        for (i=0; dotNumber<i; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
        
    return 0;
}
