#include "UserAccount.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

User_Account::User_Account() {
	User_ID = "";
	User_name = "";
	User_password = "";
}

void User_Account::setUserAccount(string UID, string Uname, string Upassword) {
	User_ID = UID;
	User_name = Uname;
	User_password = Upassword;

};

void DisplayUserAccountDetails() {

};
void UserLogin() {

};
void UserLogout() {

};
void Changepassword() {

};
void Changeusername() {

};
