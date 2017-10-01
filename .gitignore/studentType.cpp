#include <iostream>
#include <string>
#include <iomanip>
#include "studentType.h"
using namespace std ;


studentType:: studentType()
{
  name = " " ;
  total = 0 ;
  final_grade = ' ' ;
  prop = 0 ;
  prob = 0 ;
  sol = 0 ;
  conc = 0;
  pres = 0;
  port = 0;
  
  news = 0;
  readresp = 0 ;
  propconsid = 0 ;
  
  EAI = 0;
  attend = 0;
  part = 0;
  
  cout << "What is the student's name ? " << endl ;
  cin >> name ;
  
  cout << "How much did " << name << " get on the proposal paper ? " ;
  cin >> prop ;
  proposal(prop) ;
  
  cout << "How much did " << name << " get on the problems paper ? " ;
  cin >> prob ;
  problem(prob) ; 
  
  cout << "How much did " << name << " get on the solutions paper ? " ;
  cin >> sol ;
  solution(sol) ; 
  
  cout << "How much did " << name << " get on the conclusion paper ? " ;
  cin >> conc ;
  conclusion(conc) ; 
  
  cout << "How much did " << name << " get on the presentation ? " ;
  cin >> pres ;
  presentation(pres) ; 
  
  cout << "How much did " << name << " get on the portfolio ? " ;
  cin >> port ;
  portfolio(port) ; 
  
  cout << "Please enter the score of Newspaper empathy, Reading Response and Proposal Consideration seprated by a space " ;
  cin >> news >> readresp >> propconsid ;
  otherassignment(news, readresp, propconsid) ;
  
  cout << "Please enter the score of EAI, Attendance and Participation seprated by a space " ;
  cin >> EAI >> attend >> part ;
  participation(EAI, attend, part) ;
  
  gradereturn(total) ;
  
  cout << endl << endl ;
  
}

float studentType:: proposal(int prop_score)
{
  total += ( float(prop_score) / 100 ) * 10  ;
}

float studentType:: problem(int prob_score)
{
  total +=  ( float(prob_score) / 100 ) * 20  ;
}

float studentType:: solution(int sol_score)
{
  total +=  ( float(sol_score) / 100 ) * 20  ;
}

float studentType:: conclusion(int conc_score)
{
  total += ( float(conc_score) / 100 ) * 10  ;
}

float studentType:: presentation(int pres_score)
{
  total += ( float(pres_score) / 30 ) * 5  ;
}

float studentType:: portfolio(int portfolio_score)
{
  total += ( float(portfolio_score) / 100 ) * 10  ;
}

float studentType:: otherassignment(int news, int read_resp, int prop_consid)
{
  
  total +=( ( ( float(news) / 10 )  + ( float(read_resp) / 25 ) + (float(prop_consid) / 10) ) * 5 );
}

float studentType:: participation(int EAI, int attend, int part)
{
  total +=( ( ( float(EAI) / 15 )  + ( float(attend) / 16 ) + (float(part) / 10) ) * 5 );
  
}

void studentType:: print()
{
  cout << fixed << showpoint ;
  cout << setw(4) << getname() << "\t" << setw(8) << getprop() << "\t" << setw(7) << getprob() << "\t" << setw(7) << getsol() << "\t" << setw(12) << getconc() << "\t" << setw(12) << getpres() << "\t" << setw(12) << getport() << "\t" << setw(20) << getnews() << "  " << setw(12) << getreadresp() << "  " << setw(12) << getpropconsid() << "\t" << "  " << setw(11) << getEAI() << "  "<< setw(10) << getattend() << "  " << setw(10) << getpart() << "\t" << setw(12) << setprecision(2) << gettotal() << "\t" << final_grade << endl ;
}

char studentType:: gradereturn(float total)
{
  if( total >= 90)
    final_grade = 'A';
  else
    if (total >= 80)
      final_grade = 'B' ;
    else
      if (total >= 70)
        final_grade = 'C' ;
      else
        if (total >= 60)
          final_grade = 'D' ;
        else
          final_grade = 'F' ;
}

float studentType:: gettotal() 
{
  return total ;
}

string studentType:: getname()
{
  return name ;
}

int studentType:: getprop()
{
  return prop;
}

int studentType:: getprob()
{
  return prob ;
}
  
int studentType:: getsol()
{
  return sol ;
}

int studentType:: getconc()
{
  return conc ;
}

int studentType:: getpres()
{
  return pres ;
}

int studentType:: getport()
{
  return port ;
}
    
int studentType:: getnews()
{
  return news ;
}

int studentType:: getreadresp()
{
  return readresp ;
}

int studentType:: getpropconsid()
{
  return propconsid ;
}
    
int studentType:: getEAI()
{
  return EAI ;
}

int studentType:: getattend()
{
  return attend ;
}

int studentType:: getpart()
{
  return part ;
}
