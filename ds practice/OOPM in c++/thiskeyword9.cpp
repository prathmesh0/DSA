#include<iostream>
using namespace std;

class Students{
    public:
    int rollno;
    string name;
    char gender;
    
    Students(int rollno, string name, char gender){
        this->rollno= rollno;
        this->name= name;
        this->gender= gender;
    }

    void display(){
        cout<<name<<" "<<rollno<<" "<<gender<<endl;
    }
};

int main(){
    // creating an object
    Students p1=Students(11,"pop", 'm');
    Students p2=Students(51,"MANGU", 'm');
    p1.display();
    p2.display();
    return 0;
}