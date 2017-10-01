#include <iostream>
#include <string>
#include <iomanip>

using namespace std ;

class studentType
{
  public:
    studentType() ;
    
    string stemp ;
    
    float proposal(int) ;
    float problem(int) ;
    float solution(int) ;
    float conclusion(int) ;
    float presentation(int) ;
    float portfolio(int) ;
    float otherassignment(int, int, int ) ;
    float participation(int, int, int) ;
    void print() ;
    
    float gettotal() ;
    
    string getname() ;
    int getprop() ;
    int getprob() ;
    int getsol() ;
    int getconc();
    int getpres();
    int getport();
    
    int getnews();
    int getreadresp();
    int getpropconsid();
    
    int getEAI();
    int getattend();
    int getpart();
    
    char gradereturn(float total);
    
    
    char final_grade ;
    float total ;
    
  private:
    
    string name ;
    int prop ;
    int prob ;
    int sol ;
    int conc ;
    int pres ;
    int port ;
    
    int news ;
    int readresp ;
    int propconsid ;
    
    int EAI ;
    int attend ;
    int part ;
    
};
