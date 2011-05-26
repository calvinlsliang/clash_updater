#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// @author Calvin Liang <cliang4@berkeley.edu>

int main(int argc, char* argv[]) {
    if (argc != 4) {
	printf("Incorrect number of arguments.\n");
	printf("First argument: File where new grid line locations are located.\n");
	printf("Second argument: File where original file is located.\n");
	printf("Third argument: New file where gridlines are added.\n");
	exit(1);
    }

    // Opens the first two files to read from and a third file to write to
    ifstream file1;
    ifstream file2;
    ofstream file3;
    file1.open(argv[1]);
    file2.open(argv[2]);
    file3.open(argv[3]);

    /*
    ** string clash is the current grid line location
    ** string viewpoint is the the current line in the viewpoints file
    ** view_name is the string I use to compare each line with
    ** found is the index at which the string is found
    */
    string clash;
    string viewpoint;
    string view_name ("<view name=\"");
    size_t found;

    // file1 should be opened as long as there's new grid lines
    if (file1.is_open() && file2.is_open() && file3.is_open()) {
	while (file1.good() && file2.good() && file3.good()) {

	    // Reads the first file for the current grid line
	    getline(file1, clash);

	    // I had to check special cases for carriage returns (^M)
	    // and gridlines that are two characters long
	    if (clash[clash.length()-1] == 0x0D) {
		clash = clash.substr(0, clash.length()-1);
	    }
	    if (clash[clash.length()-1] == ' ') {
		clash = clash.substr(0, clash.length()-1);
	    }

	    // Just an arbitrary while loop, which should continue as long
	    // as the second file input is good
	    while (!file2.eof()) {
		// Reads the second file for the current xml line
		getline(file2, viewpoint);
		found = viewpoint.find(view_name);

		// If the expression "<view name="" isn't found, then
		// I just write it to the third file since there's nothing
		// to be changed
		if (found == string::npos) {
		    file3 << viewpoint << endl;
		} else {
		    // old: <view name="Clash11111"> with gridline D22
		    // new: <view name="D22 Clash11111">
		    string end;
		    end = viewpoint.substr(18, string::npos);
		    file3 << "      " << view_name << clash << " " << end << endl;
		    break;
		}
	    }
	}

	// The while loop will exit once we run out of new gridlines, which doesn't
	// mean the rest of second file's contents are written, so we need another
	// loop to write out the rest of the file contents

	while (!file2.eof()) {
	    getline(file2, viewpoint);
	    file3 << viewpoint << endl;
	}
	file1.close();
	file2.close();
	file3.close();
    }
    return 0;
}
