#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std ;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    
    for(int i = 1 ; i <= 3 ; i++){
        cin.get();
    }
    srand(time(0)) ;
    int x = rand() % 9 ;
    string ga ;
    if(x == 0) ga = "A" ;
    else if(x == 1)  ga = "B+" ;
    else if(x == 2)  ga = "B" ;
    else if(x == 3)  ga = "C+" ;
    else if(x == 4)  ga = "C" ;
    else if(x == 5)  ga = "D+" ;
    else if(x == 6)  ga = "D" ; 
    else if(x == 7)  ga = "F" ;
    else  ga = "W" ;
    
   cout << "You will get "<< ga <<" in this 261102." ;
   return 0 ;
}
