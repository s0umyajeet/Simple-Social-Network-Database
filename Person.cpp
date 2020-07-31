#include "Person.hpp"
#include <iostream>
#include <string> 
using namespace std;
#define not_available "N/A"

Person::Person() {        
        name            = not_available;
        username        = not_available;
        email           = not_available;
        password        = not_available;
        date_created     = not_available;
        followers_count = 0;
        following_count = 0;
}

Person::Person(string name, string username, string email, string date_created, string password) {
        this->name = name;
        this->username = username;
        this->date_created = date_created;
        this->email = email;
        this->password = password;
}

string Person::get_name() {
        return this->name;
}

string Person::get_email() {
        return this->email;
}

string Person::get_username() {
        return this->username;
}

void Person::add_follower(Person &p) {
        this->followers_list.push_back(p);
}

void Person::add_following(Person &p) {
        this->following_list.push_back(p);
}

void Person::print_followers_list() {
        for (auto x : this->followers_list) {
                x.get_username();
        }
}
int Person::get_follower_count() {
        return this->followers_count;
}

int Person::get_following_count() {
        return this->following_count;
}

void Person::show_details() {
        cout << "NAME         : " << this->name << ws(5) << endl;
        cout << "USERNAME     : " << this->username << ws(5) << endl;
        cout << "EMAIL        : " << this->email << ws(5) << endl;
        cout << "DATE CREATED : " << this->date_created << ws(5) << endl;
        cout << "FOLLOWERS    : " << this->followers_count << ws(5) << endl;
        cout << "FOLLOWING    : " << this->following_count << ws(5) << endl;
}
