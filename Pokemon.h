#include <iostream>

using namespace std;

class Pokemon{
    protected:
        string tipo;
        string nombre;
        int health;
        int attackdamage;
        string fuerteContra;
    public:
        Pokemon(string tipo,string nombre,int health,int attackdamage,string fuerteContra){
            this->tipo=tipo;
            this->nombre=nombre;
            this->health=health;
            this->attackdamage=attackdamage;
            this->fuerteContra=fuerteContra;
        }
        string getnombre(){
            return nombre;
        }
        int gethealth(){
            return health;
        }
        string gettipo(){
            return tipo;
        }
        int getattackdamage(){
            return attackdamage;
        }
        string getfuerteContra(){
            return fuerteContra;
        }
        void sethealth(int health){
            this->health = health;
        }
};


