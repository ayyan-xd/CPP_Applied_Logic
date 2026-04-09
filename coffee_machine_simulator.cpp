#include <iostream>
using namespace std;
int main() {
  char type;
  cout<<"Select type of coffee (W=while/B=black): ";
  cin>>type;
  char size;
  cout<<"Select cup size (D=double/M=manual): ";
  cin>>size;
  if(if ((type == 'W' || type == 'w') && (size == 'M' || size == 'm'))){
      cout<<"put water  15 minutes"<<endl<<"Sugar      15 minutes"<<endl<<"Mix well   20 minutes"<<endl<<"Add coffee 2 minutes"<<endl<<"Add milk   4 minutes"<<endl<<"Mix well   20 minutes";
  }else if(type=='W' || type=='w'&& size=='D' || size=='d'){
      cout<<"put water  22.5 minutes"<<endl<<"Sugar      22.5 minutes"<<endl<<"Mix well   30 minutes"<<endl<<"Add coffee 3 minutes"<<endl<<"Add milk   6 minutes"<<endl<<"Mix well   30 minutes";
  }else if(type=='B' || type=='b' && size=='M' || size=='m'){
      cout<<"put water  20 minutes"<<endl<<"Sugar      20 minutes"<<endl<<"Mix well   25 minutes"<<endl<<"Add coffee 15 minutes"<<endl<<"Mix well   25 minutes";
  }else if(type=='B' || type=='b' && size=='D' || size=='d'){
      cout<<"put water  30 minutes"<<endl<<"Sugar      30 minutes"<<endl<<"Mix well   37.5 minutes"<<endl<<"Add coffee 22.5 minutes"<<endl<<"Mix well   20 minutes";
  }
    return 0;
}
