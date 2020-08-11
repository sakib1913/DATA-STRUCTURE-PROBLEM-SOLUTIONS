#include<bits/stdc++.h>
using namespace std;
unordered_map<string, int> monthsMap;

// Function which initializes the monthsMap
void sort_months()
{
    monthsMap["Jan"] = 1;
    monthsMap["Feb"] = 2;
    monthsMap["Mar"] = 3;
    monthsMap["Apr"] = 4;
    monthsMap["May"] = 5;
    monthsMap["Jun"] = 6;
    monthsMap["Jul"] = 7;
    monthsMap["Aug"] = 8;
    monthsMap["Sep"] = 9;
    monthsMap["Oct"] = 10;
    monthsMap["Nov"] = 11;
    monthsMap["Dec"] = 12;
}
bool comp_year_mnth_and_day(string a,string b)
{
///compare year
string str1=a.substr(7,5);
string str2=b.substr(7,5);
if(str1.compare(str2)!=0){
    if(str1.compare(str2)<0)
        return true;
    return false;
}
///compare month
string str3=a.substr(3,3);
string str4=b.substr(3,3);
int mnth_a = monthsMap[str3];
int mnth_b = monthsMap[str4];
if(mnth_a!=mnth_b)
{   return mnth_a<mnth_b;
}
///compare day
string str5=a.substr(0,2);
string str6=b.substr(0,2);
if(str5.compare(str6)<0)
    return true;
return false;

}
void printDates(string dates[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << dates[i] << endl;
    }
}
int main()
{
string dates[] = { "24 Jul 2017", "25 Jul 2017", "11 Jun 1996",
                       "01 Jan 2019", "12 Aug 2005", "01 Jan 1997", "10 Aug 2000", "10 Sep 2000"};
int n=sizeof(dates)/sizeof(dates[0]);
sort_months();
sort(dates,dates+n,comp_year_mnth_and_day);
printDates(dates,n);
return 0;
}
