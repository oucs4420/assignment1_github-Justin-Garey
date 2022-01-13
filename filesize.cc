#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//

/**
  * getLines: Returns the number of lines in a file
  * @param filename : The name of the file to access
  * @return : Returns the an integer of the number of lines in the file
 **/
int getLines(string filename){
    ifstream ins;                          // Create variable to hold file
    ins.open(filename);                    // Open file
    if (ins.fail()) return -1;             // If file cannot be opened return -1
    string line;                           // Create variable to hold the line
    int count = 0;                         // Create counter variable
    while (getline(ins, line)) count++;    // If we have a line, add to count
    return count;                          // Return the count
}


int main( int argc, char* argv[] )
{
    // Print out program
    cout << "program: " << argv[0] << endl;
    // Print out lines in each file
    for (int arg = 1; arg < argc; ++arg)
            cout << " " << argv[arg] << ": " << getLines(argv[arg]) << endl;

    exit(0); // this means that the program executed correctly!
}