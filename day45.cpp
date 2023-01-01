#include <iostream>
using namespace std;
class student{
    protected:
      int number;
    public:
      void set_number(int a){
        number=a;
      }
      void print_number(){
        cout<<"Your roll number is: "<<number<<endl;
      }
};
class test: virtual public student{
    protected :
     int maths;
     int physics;
    public:
      void set_marks(int a, int b){
        maths=a;
        physics=b;
      }
      void print_marks(){
         cout<<"your marks in maths is: "<<maths<<endl;        
         cout<<"your marks in physics is: "<<physics<<endl;        
      }
};
class sports: virtual public student{
    protected: 
     int score;
    public:
      void set_score(int a){
        score=a;
      }
      void print_score(){
        cout<<"your score is: "<<score<<endl;
      }
};
class result: public test, public sports{
    int digit;
    public:
      void get_result(){
        cout<<"your total score is: "<<maths+physics+score<<endl;
      }
};
int main() {
    result devesh;
    devesh.set_number(13);
    devesh.set_marks(99,98);
    devesh.set_score(8);
    devesh.print_number();
    devesh.print_marks();
    devesh.print_score();
    devesh.get_result();
    return 0;
}