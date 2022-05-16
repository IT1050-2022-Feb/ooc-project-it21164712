#include "GuestUser.h"
#include "UserAccount.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
Guest_user::Guest_user() {
	Guest_ID = "";
	Guest_Name = "";
	Guest_Email = "";
}
void Guest_user :: setGuest(string GID, string Gname, string GEmail) {
	Guest_ID = GID;
	Guest_Name = Gname;
	Guest_Email = GEmail;

};
void Guest_user::DisplayGusetuserDetails() {

};
void Guest_user::Registeruser() {

};
void Guest_user::AddUserAccount(User_Account* U) {

}
