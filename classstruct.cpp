/*
#include <iostream>
using namespace std;


struct book{
    string booktitle;
    string bookauthor;
    int bookprice;

};


int main(int argc, char const *argv[])
{       
    book book1;
   book1.bookprice=250;
   cout<<book1.bookprice;
    
    return 0;
}*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}*/
#include <iostream>
using namespace std;

struct student {
  int roolno;
  char name[20];
  float marks;
};
int main(int argc, char const *argv[])
{          student s ={ 11,"raj",11.11};
          cout<<s.roolno;
          cout<<s.name;
     
  
  return 0;
}






