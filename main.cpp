#include <iostream>
#include "Pokemon.h"
#include <string.h>

using namespace std;

void attack(Pokemon &p1, Pokemon &p2){
	if(p1.getfuerteContra()==p2.gettipo()){
		cout<<"A Pokemon is attacking with a CRITICAL ATTACK other Pokemon! "<<endl;
		p2.sethealth(p2.gethealth()-(p1.getattackdamage()*2));
        cout<<p2.gethealth();
	}
	else{
		cout<<"A Pokemon is attacking other Pokemon! "<<endl;
		p2.sethealth(p2.gethealth()-p1.getattackdamage());
	}
}

int main(){
	Pokemon bulbasaur("Planta","Bulbasaur",100,20,"Tierra");
    Pokemon charmander("Fuego","Charmander",120,30,"Planta");

    attack(charmander,bulbasaur);

}