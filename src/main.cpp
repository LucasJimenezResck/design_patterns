
#include "../include/Move.h"

//Aufgabe in Tutorium SWE2, danach bearbeiten
#if 0
//Goal: make class Banane 
class Banane;

class Observer{
public:
    void virtual update(int a) = 0;
};

class Subject
{
public:
    void virtual attach(Observer* obs) = 0;
    void virtual detach(Observer* obs) = 0;
    void virtual notify() = 0;
};

class Banane : public Subject
{
private:
    int a, b, c;
public:
    int getA() {return a;}
    void setA(int value) {a = value;};
    int getB() {return b;}
    void setB(int value) {b = value;};
    void attach(Observer* obs){}
    void detach(Observer* obs){}
    void notify(){}

};


class Observable : public Subject, public Banane
{
private:
//Verbindung zum Observer
//Observable weisst, wer ihn anschaut, am Ende jede Aktion
//wird jeder Beobachter mitgeteilt
    std::vector<Observer*> mObs;
public:
    void print42()
    {
        std::cout << 42 << std::endl;
        setA(42);
    }
    void attach(Observer* obs)
    {
        mObs.push_back(obs);
    }
    void detach(Observer* obs)
    {
        for(int i = 0; i < mObs.size(); i++)
        {
            if(mObs[i] == obs)
            {
                mObs.erase(mObs.begin() + i);
            }
        }
    }
    void notify()
    {
        for(auto i: mObs)
        {
            i->update(getA());
        }
    }

};

class ConcreteObserver : public Observer
{
public:
    void update(int a)
    {
        std::cout << a << std::endl;
    }
};
#endif


//Interface, die bekannt ist bei andere
//Aber was dahinter steht ist versteckt
int main()
{
/*Implementation of the Command pattern
//Uses classes Command, MacroCommand, Move and Character
//Main may use this include #include "../include/Move.h"
//Remember to also put these file classes into the add_executable function of CMake*/
#if 1

    //MacroCommand myMacro;
    Character viki("Victoria");
    Move* m1 = new Move;
    Move* m2 = new Move;
    Move* m3 = new Move;
    Move* m4 = new Move;
    //Commented lines were old way of using the MacroCommand, now a static Variable in Move
    //myMacro.add(m1);
    //myMacro.add(m2);
    //myMacro.add(m3);
    //myMacro.add(m4);
    //myMacro.execute(viki);
    //myMacro.undo(viki);
    m2->getMacroCommand()->execute(viki);
    m3->getMacroCommand()->undo(viki);
#endif

    return 0;
}