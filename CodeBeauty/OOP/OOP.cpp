#include <iostream>

using std::string, std::cout, std::cin, std::endl;

class AbstractEmployee{
  virtual void AskPromotion() = 0;
};
class Employee:AbstractEmployee {
  private:
    string Name;
    string Company;
    int Age;

  public:
    void SetName(string name){//setter
      Name = name;
    }
    string getName(){//getter
      return Name;
    }    

    void SetCompany(string company){//setter
      Company = company;
    }
    string getCompany(){//getter
      return Company;
    } 

    void SetAge(int age){//setter
      if(age >= 18){
        Age = age;
      }
    }
    int getAge(){//getter
      return Age;
    } 

    void IntroduceYourslef(){
      cout << "Name: " << Name << endl;
      cout << "Company: " << Company << endl;
      cout << "Age: " << Age << endl;
    }

    Employee(string name, string company, int age){
      name = Name;
      company = Company;
      age = Age;
    }

    void AskPromotion(){
      if(Age > 30)
        cout << Name << " got promoted!" << endl;
      else
        cout << Name << ", sorry NO promotion for you!" << endl;
    }
    // 1:09:47
};

class Developer:Employee{
  public:
    string favProgrammingLanguage;
    Developer(string name, string company, int age, string FavProgrammingLanguage):Employee(name, company, age){
      favProgrammingLanguage = FavProgrammingLanguage;
    }

    void FixBug(){
      cout << getName() << "fixed bug using: " << favProgrammingLanguage << endl; 
    }

};

int main(){
  Employee employee1= Employee("Andre", "Microsoft", 17);
  Employee employee2= Employee("John", "Amazon", 27);
  Developer dev1 = Developer("Andre", "Microsoft", 17, "Python");
  employee1.AskPromotion();
  employee2.AskPromotion();
  dev1.FixBug();
}
