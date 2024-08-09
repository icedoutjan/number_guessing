//
//  main.cpp
//  zahlen_spiel
//
//  Created by Jan Giritsch on 08.05.23.
//

#include <iostream>
#include <random>
#include <string>

std::random_device rd;
std::mt19937 gen(rd());
int random(int low, int high)
{
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}
int zufall = random(1,100);

int einga = 0;
std::string primezahl();
std::string quersumme();
std::string kleiner_größer();


int main(int argc, const char * argv[]) {
    int versuche = 0;
   
    std::cout << "rate eine zahl zwischen 1-100\n";
    //std::cout << zufall << "\n" ;
    for(;;versuche++){
        switch (versuche){
            case 0:{
                std::cout << primezahl();
                break;
            }
            case 1:{
                std::cout << quersumme();
                break;
            }
            default:{
                std::cout << kleiner_größer();
                break;
            }
                
        }
            
       
        std::cin >> einga;
        if (einga == zufall){
            break;
        }
    }
    std::cout << "richtig geraten du hast nur "<< versuche << " versuche gebraucht";

    return 0;
}
//tipp
std::string primezahl() {
    int sus = 0;
    for(int i = 0;i<=100;i++){
        int erg = zufall % i;
        if (erg == 0){
            sus++;
        }
        
    }
    if (sus >=3){
       
        return "die gesucht zahl ist keine primzahl\n";
    }
    else{
      
        return "die gesucht zahl ist eine primzahl\n";
    }
}
//tipp
std::string quersumme(){
    int a,b,c = 0;
    a = zufall % 10;
    b = zufall /10 %10;
    c = zufall /100 %10;
   // std::cout << a+b+c;
    auto s = std::to_string(a+b+c);
    s = "die quersumme lautet "+s+"\n";
    return s;
}
std::string gerade (){ // daraus könnte man die länge errechen
    int z = 1;
    int a,b,c = 0;
    a = z % 10;
    b = z /10 %10;
    c = z /100 %10;
   // std::cout << zufall << "\n";
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";

    return 0;
}
std::string kleiner_größer(){
   
    //std::cout << zufall;
    if(zufall < einga){
        return "zu groß\n";
    }
    return "zu klein\n";
}

