//
//  main.cpp
//  file-read-example
//
//  Created by Daniel Williams on 11/20/17.
//  Copyright © 2017 Daniel Williams. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
  
    // Open the file "file-example.dat" to read a number of values and process them.
    int nvalues, value, i, sum;
    
    ifstream ifs;
    
    ifs.open("Users/danielwilliams/file-example.dat");
    
    // Read the number of values tfrom the first value in the file
    ifs >> nvalues;
    
    // Now read nvalues from the file and add them into sum
    sum=0;
    cout << "Reading " << nvalues << " values...\n";
    for(i=0; i<nvalues; i++)
    {
        //Read the next value in the file
        ifs >> value;
        cout << "Read value " << value << endl;
        sum += value;
    }
    
    cout << "The sum is " << sum << endl;
    
    // All done - close the file
    ifs.close();
    
    return 0;
}
