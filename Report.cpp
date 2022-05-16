#include "Report.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Report::Report() {
    Report_ID = "";
    Report_name = "";
    Report_date = "";

}

void Report::setReport(string RID, string Rname, string Rdate) {
    Report_ID = RID;
    Report_name = Rname;
    Report_date = Rdate;
};

void Report::DisplayReservationReport() {

};
void Report::DisplayPaymentReport() {

};
void Report::DisplayAvailbledateReport() {

};
void Report::DisplayFavouritehotelReport() {

};
void Report::CalcMonthlyPayments() {

};

