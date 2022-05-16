
#include <string>

using namespace std;

class Guest_user
{
private:
	string Guest_ID;
	string Guest_Name;
	string Guest_Email;
public:
	Guest_user(); //constructor
	void setGuest(string GID, string Gname, string GEmail);
	void DisplayGusetuserDetails();
	void Registeruser();
	void AddUserAccount(User_Account *U);
};