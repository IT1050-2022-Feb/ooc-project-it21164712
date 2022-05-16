#include <string>


using namespace std;

class Report
{
private:
	string Report_ID;
	string Report_name;
	string Report_date;

public:
	Report();
	void setReport(string RID, string Rname, string Rdate);
	void DisplayReservationReport();
	void DisplayPaymentReport();
	void DisplayAvailbledateReport();
	void DisplayFavouritehotelReport();
	void CalcMonthlyPayments();
	~Report ();

};