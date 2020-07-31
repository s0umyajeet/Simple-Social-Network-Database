#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
        string          name;
        string          username;
        string          email;
        string          password;
        string          date_created;
        vector<Person>  followers_list;
        vector<Person>  following_list;
        int             followers_count;
        int             following_count;

        public:
        void    show_details();
        string  get_name();
        string  get_username();
        string  get_email();
        void    set_password();
        bool    change_password();
        string  show_password(string master_password);
        int     get_follower_count();
        int     get_following_count();
        void    print_followers_list();
        void    print_following_list();
        void    show_mutual_followers(Person &p);
        void    show_mutual_following(Person &p);
        void    add_follower(Person &p);
        void    add_following(Person &p);
};
