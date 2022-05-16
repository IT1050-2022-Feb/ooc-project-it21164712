

#include <string>

using namespace std; 

class User_Account
{
private:
	string User_ID;
	string User_name;
	string User_password;
public:
	User_Account();
	void setUserAccount(string UID, string Uname, string Upassword);
	void UserAccount();
	void DisplayUserAccountDetails();
	void UserLogin();
	void UserLogout();
	void Changepassword();
	void Changeusername();

};