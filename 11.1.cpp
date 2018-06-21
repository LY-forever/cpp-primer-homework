#include<cmath>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include"11.1.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
static unsigned long steps = 0;

namespace VECTOR 
{
	const double Rad_to_deg = 45/atan(1);
	void Vector::set_mag()
	{
		mag = aqrt(x*x+y*y);
	}
	void Vector::set_ang()
	{
		if(x == 0 && y == 0)
			ang = 0;
		else 
			ang = atan2(y,x);
	}
	
	void Vector::set_x()
	{
		x = mag*cos(ang);
	}

	void Vector::set_y()
	{
		y = mag*sin(ang);
	}
	Vector::Vector()
	{
		x = y = mag = ang = 0;
		mode = RECT;
	}

	Vector::Vector(double n1,double n2,Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if(form == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else 
		{
			cout<<"Incorrect 3rdargument to Vector() --";
			cout<<"vector set to 0\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1,double n2,Mode form)
	{
     mode = form;  
        if ( form == RECT )  
        {  
            x = n1;  
            y = n2;  
            set_mag();  
            set_ang();  
        }  
        else if ( form == POL )  
        {  
            mag = n1;  
            ang = n2;  
            set_x();  
            set_y();  
        }  
  
        else  
        {  
            cout << "Incorrect 3rd argument to Vector() --";  
            cout << "vector set to 0\n";  
            x = y = mag = ang = 0;  
            mode = RECT;  
        }  
  
    }  
    Vector::~Vector()  
    {}  
    void Vector::polar_mode()  
    {  
        mode = POL;  
    }  
    void Vector::rect_mode()  
    {  
        mode = RECT;  
    }  
  
    Vector Vector::operator+ ( const Vector &b ) const  
    {  
        return Vector ( x + b.x, y + b.y );  
    }  
    Vector Vector::operator- ( const Vector &b ) const  
    {  
        return Vector ( x - b.x, y - b.y );  
    }  
    Vector Vector::operator-() const  
    {  
        return Vector ( -x, -y );  
    }  
    Vector Vector::operator* ( double n ) const  
    {  
        return Vector ( x * n, y * n );  
    }  
    Vector operator* ( double n, const Vector & a )  
    {  
        return Vector ( a * n );  
    }  
  
    /* 
    std::ostream & operator<< ( std::ostream & os, const Vector & v ) 
    { 
        if ( v.mode == Vector::RECT ) 
            os << "(x,y) = (" << v.x << "," << v.y << ")"; 
        else if ( v.mode == Vector::POL ) 
        { 
            os << "(m.a )= (" << v.mag << ", " << v.ang*Rad_to_deg << ")"; 
        } 
        else 
            os << "Vector object mode is invalid"; 
        return os; 
    } 
    */  
    std::ostream & operator<< ( std::ostream & os, const Vector & v )  
    {  
        if ( v.mode == Vector::RECT )  
            os << "(x,y) = (" << v.x << ", " << v.y << ")";  
        else if ( v.mode == Vector::POL )  
        {  
            os << "(m.a )= (" << v.mag << ", " << v.ang*Rad_to_deg << ")";  
        }  
        else  
            os << "Vector object mode is invalid";  
        return os;  
    }  
}  
  
  
  
int main()  
{  
    using namespace std;  
    using VECTOR::Vector;  
    ofstream fout("thewalk.txt",ios::out);  
    if(!fout)  
    {  
        cerr<<"The file does not exist "<<endl;  
        exit(EXIT_FAILURE);  
    }  
    srand ( time ( 0 ) );  
    double direction;  
    Vector step;  
    Vector result ( 0, 0 );  
    double target;  
    double dstep;  
    cout << "Enter target distance (q to quit): ";  
    while ( cin >> target )  
    {  
        cout << "Enter step distance: ";  
        if ( ! ( cin >> dstep ) )  
            break;  
        fout<<"Target Distance: "<<target<<", "<<"Step Size: "<<dstep<<endl;  
        while ( result.magval() < target )  
        {  
            fout<<steps<<": "<<result<<endl;  
            direction = rand() % 360;  
            step.reset ( dstep, direction, Vector::POL );  
            result = result + step;  
            steps++;  
        }  
        cout << "After" << steps << " steps, the subject has the following location:\n";  
        fout << "After" << steps << " steps, the subject has the following location:\n";  
        fout<<result<<endl;  
        cout<<result<<endl;  
        result.polar_mode();  
        cout<<" or \n"<<result<<endl;  
        fout<<" or \n"<<result<<endl;  
        cout<<"Average outward distance per step = "<<result.magval()/steps<<endl;  
        fout<<"Average outward distance per step = "<<result.magval()/steps<<endl;  
        steps = 0;  
        result.reset(0,0);  
        cout << "Enter target distance (q to quit): ";  
    }  
    cout<<"Bye!\n";  
    cin.clear();  
    while(cin.get()!='\n')  
    continue;  
    return 0;  
}  
