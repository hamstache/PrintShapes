#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


void exercise2part2(){
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];
    double totalSales = 0;
    int div, qtr;
    ifstream datafile;
    
    datafile.open("/users/hamstache/sales2.txt");
    if (!datafile) {
        cout<<"Error open data file\n";
    }else {
        cout << fixed<< showpoint << setprecision(2);
        cout << "Quarterly Sales by Division\n\n";
        
        for (div = 0; div < NUM_DIVS; div++) {
            for (qtr = 0; qtr < NUM_QTRS; qtr++) {
                cout<<"Division " << (div +1) << ", Quarter " << (qtr + 1) << ": $";
                datafile>>sales[div][qtr];
                cout << sales[div][qtr] << endl;
                
            }
            cout << endl; //print blank line
        }
        datafile.close();
        
        //nested loops are used to add all the elements
        for (div = 0; div< NUM_DIVS; div++) {
            for (qtr = 0; qtr<NUM_QTRS;qtr++) {
                totalSales += sales[div][qtr];
                
            }
            cout << "The total sales for the company are: $";
            cout << totalSales <<endl;
        }
    }
    
    
    
    
    
    
}