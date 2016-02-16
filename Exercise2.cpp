#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


void exercise2(){
    const int SIZE = 20;
    ifstream dataIN;
    int numOffices, count;
    double sales[SIZE], totalSales = 0.0, averageSales;
    
    dataIN.open("/users/hamstache/sales.txt");
    if (!dataIN) {
        cout << "Error opening the data file.\n";
    }else {
        count = 0;
        while (count < SIZE && dataIN >> sales[count]) {
            totalSales += sales[count++];
        }
        numOffices = count;
        dataIN.close();
        
        averageSales = totalSales / numOffices;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The total sales are  $" <<setw(9)<<totalSales<<endl;
        cout<<"The average sales are $"<<setw(9)<<averageSales<<endl;
        
        cout<<"\nThe following offices have below-average sales figures. \n";
        for(int office = 0; office<numOffices; office++) {
            if (sales[office] < averageSales){
                cout<<"Office " <<setw(2) << (office +1) << " $" << sales[office]<<endl;
            }
        }
    }
    
    
    
    
    
    
}