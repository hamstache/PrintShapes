#include <iostream>
#include <iomanip>
using namespace std;

void printpattern(int , char, char, int , void (*fp)(int, char, char, int));

void printdiamond( int , char , char , int );
void printline( int& , char& , char& , int& );
void printfillchars (int& , char& );
void printchars(int& , char& );

void printtriangle(int, char, char, int);
void printline2( int& , char& , char& , int& );
void printfillchars2 (int& , char& );
void printchars2(int& , char& );

void printreversetriangle(int, char, char, int);
void printline3( int& , char& , char& , int& );
void printfillchars3 (int& , char& );
void printchars3(int& , char& );

void exercise1(){
    
    printpattern(1, '!', '@', 11, printdiamond);
    cout<<endl;
    printpattern(1, 'a', 'Z', 11, printtriangle);
    cout<<endl;
    printpattern(1, '_', 'R', 11, printreversetriangle);
    cout<<endl;
    
}

void printpattern( int n, char c, char cfill, int width, void (*fp) (int n, char c, char cfill, int width)){
    (*fp)(n, c, cfill, width); //this will be printdiamondline, print triangleline, or printreversetriangle
    if (n<width){
        printpattern (n+2, c, cfill,width, fp); //recursive function call
    }
    //if (n == width) {
    //   (*fp)(n, c, cfill, width);
    // }
    if (n > 1){
        (*fp)(n-2, c, cfill, width);
    }
}



//////////////////////////////////////////////////////////////////


void printdiamond (int n, char c, char cfill, int width){
    
    if (n <= width){
        printline( n, c, cfill, width);
        //n = n+2;
        //printdiamond(n, c, cfill, width);
    }
    //if (n != width){
    //    n = n-2;
    //    printline(n, c, cfill,width);
    //}
    /*printline(n, c, cfill,width);*/
    
    
}

//////////////////////////////////////////////////////////////////

void printreversetriangle(int n, char c, char cfill, int width){
    if (n <= width){
        printline3(n, c, cfill, width);
        //n = n+2;
        //printreversetriangle(n, c, cfill, width);
    }
    //if (n != width){
    //  printline(n, c, cfill,width);
    //}
}
void printline3(int& n, char& c, char& cfill, int& width){
    int nfill = (width -n);
    printfillchars3(nfill, cfill);
    printchars3(n, c);
    
    cout<<endl;
}


void printchars3(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
    
    
    
}

void printfillchars3( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}



///////////////////////////////////////////////////////////////////////


void printtriangle(int n, char c, char cfill, int width){
    
    if (n <= width){
        printline2(n, c, cfill, width);
        //n = n+2;
        //printtriangle(n, c, cfill, width);
    }
    //if (n != width){
    //  printline2(n, c, cfill,width);
    //}
    
}

void printline2(int& n, char& c, char& cfill, int& width){
    int nfill = (width-n);
    printchars2(n, c);
    printfillchars2(nfill, cfill);
    cout<<endl;
}


void printchars2(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
    
    
}



void printfillchars2( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}

////////////////////////////////////////////////////////////////



void printline(int& n, char& c, char& cfill, int& width){
    int nfill = (width -n)/2;
    printfillchars(nfill, cfill);
    printchars(n, c);
    printfillchars(nfill, cfill);
    cout<<endl;
}

void printchars(int& n, char& c){
    for (int i=0; i < n; i ++){
        cout << c;
    }
}

void printfillchars( int& nfill, char& cfill){
    for (int i=0; i < nfill; i ++){
        cout << cfill;}
}
