#include<bits/stdc++.h>
using namespace std;

class LibraryUser {
    public:
      virtual void registerAccount() = 0;
      virtual void requestBook() = 0;

      virtual ~LibraryUser() {};
};

class KidUser : public LibraryUser {
    public:
       int age;
       string booktype;

       void registerAccount() override {
        if (age < 12) {
            cout << "You have successfully registered under Kids Account" << endl;
        }
        else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
       }

       void requestBook() override {
        if (booktype == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
       }
};

class AdultUser : public LibraryUser {
    public:
       int age;
       string booktype;

       void registerAccount() override {
        if (age > 12) {
            cout << "You have successfully registered under Adult Account" << endl;
        }
        else {
            cout << "Sorry, Age must be greater than 12 to register as a Adult" << endl;
        }
       }

       void requestBook() override {
        if (booktype == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only Adult Ficiton books" << endl;
        }
       }
};

int main() {
    //For Kid Testcase
    KidUser kid;

    kid.age = 10;
    kid.registerAccount();

    kid.age = 15;
    kid.registerAccount();

    kid.booktype = "Kids";
    kid.requestBook();

    kid.booktype = "Fiction";
    kid.requestBook();

    //For Adult Testcase
    AdultUser adult;

    adult.age = 10;
    adult.registerAccount();

    adult.age = 15;
    adult.registerAccount();

    adult.booktype = "Kids";
    kid.requestBook();

    adult.booktype = "Fiction";
    kid.requestBook();
}
