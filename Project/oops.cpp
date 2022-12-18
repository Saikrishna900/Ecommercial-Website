//what is oops?
/*it is a methodology or paradigm which is used to design programs with classes and objects
object: A real word entity which has state and behaviours and object is an instance of the class
class: it is user defined data type  and collection of objects
Empty class : the size of empty class is 1
Access properties / data members: By using dot operator 
we can access properties of class in object
Access modifiers: Public,Private,Protected
public:  we can access from anywhere 
private: We can access only in same class
protected : 
getter and setter: By using getter and setter we can access private class from anywhere
Homework: padding and greedy alignment
constructor: it is automatically invoked at the time of creation of object
 Default constructor: which has no arguments 
 parameterized constructor: which has parameter or arguments
copy constructor: it initilizes an object using another object of the same class
shallow copy and deep copy
copy assignment operator
Destructor: memory deallocation
Homework: Const Keyword
static keyword: 
syntax: returntype className :: fielfName = value; 

 
*/
#include<iostream>
#include<cstring>
using namespace std;
//class
class Hero {
    //properties
    private:
     int health;
    public: 
    char *name;
    char level;
    static int timeToComplete;
    //constructor
    Hero(){ //default constructor
        cout<<"Simple Constructor called"<<endl;
        name = new char[100];
    }
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
    //parameterized constructor
    Hero(int health){
        
        this->health= health;
    }
    Hero(int health,char level){
       
        this->level = level;
        this->health= health;
    }
    //copy constructor
    Hero (Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name =ch;
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
    this->level = temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: " <<this->level<<" ]";
        cout<<endl<<endl;

    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
     void setLevel(char ch){
        level=ch;
     }
     void setName(char name[]){
       strcpy(this->name,name);
     }
};
int Hero::timeToComplete = 5;
int main(){
cout<<Hero::timeToComplete<<endl;
}
/*
int main()
{
    //statically allocation
    Hero a;

    //dynamically allocation
    Hero *b = new Hero;
    //manually destructor ko call karna 
    delete b;

}
/*
int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8] = "Krishna";
    hero1.setName(name);
    hero1.print();
//use default copy constructor
    Hero hero2(hero1);
    hero2.print();

hero1.name[0] = 'S';
hero1.print();
hero2.print(); 
//copy assignment operator
hero1 = hero2;
hero1.print();
hero2.print();
}
/*
int main()
{
    Hero S(70,'C'); //parametrized constructor
    S.print();
    //copy constructor
    Hero R(S);
    R.print();

    
}
/*
int main(){
    //object creation statically
    Hero h1(10);
    //cout<<"Address of h1 "<<&h1<<endl;
   h1.print();
    
    //object creation dynamically
    Hero *h= new Hero(11);
    h->print();
    Hero temp(22,'B');
    temp.print();
}

/*
int main(){
    //static allocation  
    Hero a;
    a.setLevel('C');
    a.setHealth(70);
    cout<<"Level is: "<<a.level<<endl;
    cout<<"Health is: "<<a.getHealth()<<endl;
    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('D');
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;
//(or)
    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;
}
/*
int main()
{
    Hero h1;
    //setter
    h1.setHealth(70);
    h1.level='D';
    //getter
   cout<<"Health is: "<<h1.getHealth()<<endl;
    cout<<"Level is: "<<h1.level<<endl;
}
 /*
int main()
{
    Hero h1;
    h1.health= 70;
    h1.level= 'C';
   cout<<"Health is: "<<h1.health<<endl;
    cout<<"Level is: "<<h1.level<<endl;


 //   cout<<"size of class: "<<sizeof(h1)<<endl;
     return 0;
}*/