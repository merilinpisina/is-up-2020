#include <iostream>
#include <cmath>

// struct <struct_name> {<struct_data_and_functions>} <variables_of_type_struct_name>;
struct Date
{
    int day;
    int month;
    int year;
    // int hour;
    // int minutes;

    // constructor
    // Date(): day(1), month(1), year(2007) {}
    // Date(int _day, int _month, int _year) : day(_day), month(_month), year(_year) {}
    Date(int _day = 1, int _month = 1, int _year = 2007) : day(_day), month(_month), year(_year) {}
    // Date(int _day = 1, int _month = 1, int _year = 2007){
    //     // this->day=_day;
    //     day = _day;
    //     month = _month;
    //     year = _year;
    // }

    bool before(Date &other)
    {
        if (other.year < this->year)
            return false;
        if (other.year == this->year && other.month < this->month)
            return false;
        if (other.year == this->year && other.month == this->month && other.day <= this->day)
            return false;
        return true;
    }
};

struct Person
{
    std::string first_name;
    std::string last_name;
    Date date_of_birth;
} mitko;

bool before(Date &first, Date &second)
{
    if (second.year < first.year)
        return false;
    if (second.year == first.year && second.month < first.month)
        return false;
    if (second.year == first.year && second.month == first.month && second.day <= first.day)
        return false;
    return true;
}

bool before(int d1, int m1, int y1, int h1, int min1, int d2, int m2, int y2, int h2, int min2)
{
    return true;
}

struct Rectangle
{
    // public:
    double width;
    double height;
    Rectangle(double w = 0, double h = 0) : width(w), height(h) {}

    void printArea() const
    {
        std::cout << "Area of rectangle (" << width << " x " << height << ") is: " << (width * height) << std::endl;
    }
};

// class P {
// public:
// // constructor, destructor, operator=, copy constructor
// protected:
// // inherited
// private:
//  int a, b, c;

// };
struct point
{
    double x;
    double y;
    point(double _x = 0, double _y = 0)
    {
        x = _x;
        y = _y;
    }
    double distance(const point &second) const // const this
    {
        // sqrt((x2 - x1)^2 + (y2 - y1)^2)
        double sum = (second.x - this->x) * (second.x - this->x) + (second.y - this->y) * (second.y - this->y);
        return sqrt(sum);
    }
};
struct line
{
    point start;
    point end;
    line(double x1, double x2, double y1, double y2) : start(x1, y1), end(x2, y2) {}
    double lenght() const
    {
        return start.distance(end);
    }
};
struct student
{
    std::string name;
    size_t Fac_num;
    size_t years;
    student();
    student(std::string &, size_t, size_t);

    void Print() const;
};
student::student(std::string &name, size_t Fac_num = 0, size_t years = 18)
{
    this->name = name;
    this->Fac_num = Fac_num;
    this->years = years;
}
student::student()
{
    this->name = "Unknown";
    this->Fac_num = 0;
    this->years = 18;
}

void student::Print() const
{
    std::cout << name << " " << Fac_num << " " << years << std::endl;
}

int main()
{
    // Date date1;
    // Date date2{6, 1, 2021};
    // Date date3(), date4(7, 1, 2021);

    // std::cout << "Date 2: " << date2.day << "." << date2.month << "." << date2.year << std::endl;
    // std::cout << "Date 4: " << date4.day << "." << date4.month << "." << date4.year << std::endl;
    // std::cout << "Is date 2 before date 4?: " << before(date2, date4) << std::endl;
    // std::cout << "Is date 2 before date 4 (inline function)?: " << date2.before(date4) << std::endl;

    // Rectangle r;
    // std::cout << "Enter rectangle width & height: ";
    // std::cin >> r.width >> r.height;
    // r.printArea();

    // line l(2,6,1,4); // (2, 1) -> (6,4)
    // std::cout<<"lenght: "<<l.lenght()<<std::endl;

    std::string name = "Petar";

    student pesho(name, 12345, 35);
    pesho.Print();

    return 0;
}