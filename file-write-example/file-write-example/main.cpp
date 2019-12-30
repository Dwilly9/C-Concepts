//
//  main.cpp
//  file-write-example
//
//  Created by Daniel Williams on 11/20/17.
//  Copyright © 2017 Daniel Williams. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
  
    // Prompt the user for the number of values that will be entered.
    // Then prompt for the values one-by-one, writing each to the file "file-example.dat".
    
    int nvalues, value, i;
    ofstream ofs;
    
    // Open the file "file-example.dat" for writing, will use home directory
    ofs.open("/Users/danielwilliams/file-example.dat");
    
    // Prompt for the number of values, then read each value from the keyboard and write each value
    // to the file
    cout << "Enter the number of values that you will enter: ";
    cin >> nvalues;
    
    // Write the number of values to the file
    
    for(i=0; i<nvalues; i++)
    {
        cout << "Enter a value: ";
        cin >> value;
        
        // Now write this value to the file
        ofs << value << endl;
    }
    
    // All done - close the file
    ofs.close();
    
    return 0;
}
