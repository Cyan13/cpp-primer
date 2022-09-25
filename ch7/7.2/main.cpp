#include <string>
using std::string;

struct Sales_data {
    string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& sd)
{
    units_sold += sd.units_sold;
    revenue += sd.revenue;
    return *this;
}
