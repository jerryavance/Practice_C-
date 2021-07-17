/*
//my first C++ program
#include <iostream>

int main()
{
	std::cout << "Hello World!"; // prints Hello World!
	std::cout << "Vance is a C++ programmer"; // prints Vance is a C++ programmer
}
*/


/*
//2nd program
#include <iostream>

int main() { std::cout << "Hello World!"; std::cout << "Vance is a C++ programmer"; }
*/


/*
// 3rd program
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!";
	cout << "Vance is a C++ programmer";
}
*/


/*
//operating with variables
#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = 2;
	int result;

	a = a + 1;
	result = a - b;

	cout << result;
	return 0;

}
*/


/* 
//my first string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstString ("this is the first string");
	string secondString { "this is another string" };

	cout << firstString << endl;
	cout << secondString << endl;

	return 0;
}
*/


/* 
//testing input using only cin
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age(0);
	cout << "Enter your age: ";
	cin >> age;
	cout << "my age is: " << age;
	return 0;
}
*/


/* 
//testing input using getline
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystr;
	string name;
	string university;
	cout << "what is your name? ";
	getline(cin, mystr);
	name = mystr;
	cout << "what is your favrite university? ";
	getline(cin, mystr);
	university = mystr;
	cout << "my name is " << name << " my favrite univerity is " << university;
	return 0;
}
*/


/*  
//testing input with stringstream
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	float price{ 0 };
	int quantity{ 0 };

	string mystr;

	cout << "Enter the price: ";
	getline(cin, mystr);
	stringstream(mystr) >> price;

	cout << "Enter the quantity: ";
	getline(cin, mystr);
	stringstream(mystr) >> quantity;

	cout << "The total cost is: " << price * quantity << endl;
	return 0;
}
*/


/* 
#include <iostream>
#include <vector>
using namespace std;

using std::vector;
using std::cin;
using std::cout;

int MaxPairwiseProduct(const vector<int>& numbers) {
	int result = 0;
	int n = numbers.size();
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (numbers[i] * numbers[j] > result) {
				result = numbers[i] * numbers[j];
			}
		}
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
	}

	int result = MaxPairwiseProduct(numbers);
	cout << result << "\n";
	return 0;
}

*/

/* 
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string mystr;
	int a = 0;
	int b = 0;

	getline(cin, mystr);
	stringstream(mystr) >> a >> b;
	cout << "The sum is: " << a + b << endl;
}
*/


/* 
//factorial recursive example
#include <iostream>
using namespace std;

long factorial(long numb) {
	if (numb > 1) {
		return numb*factorial(numb - 1);
	}
	else {
		return 1;
	}
}

int main(void)
{
	long value = 9;
	cout << value << "! is " << factorial(value);
}
*/

/* 
//overloading functions
#include <iostream>
using namespace std;

int operate(int a, int b) {
	return(a * b);
}

double operate(double a, double b) {
	return(a / b);
}

int main(void)
{
	int a = 5, b = 2;
	double x = 5.0, y = 2.0;
	cout << "Int version: " << operate(a, b) << '\n';
	cout << "double version: " << operate(x, y) << '\n';
	return 0;
}
*/

/* 
//overloaded functions with same def
#include <iostream>
using namespace std;

int sum(int a, int b) {
	return(a + b);
}

double sum(double a, double b) {
	return(a + b);
}

int main()
{
	int a = 10, b = 20;
	double x = 1.0, y = 1.5;
	cout << sum(a, b) << '\n';
	cout << sum(x, y) << '\n';
}
*/

/*  
//using templates for overloaded functions
#include <iostream>
using namespace std;

template <class SomeType>
SomeType sum(SomeType a, SomeType b) {
	SomeType z;
	z = a + b;
	return z;
}

int main()
{
	int a = 5, b = 7, c;
	double x = 5.5, y = 2.3, z;
	c = sum<int>(5, 7);
	z = sum(x, y);

	cout << c << '\n';
	cout << z << '\n';
	return 0;
}
*/


/*  
#include <iostream>
using namespace std;
namespace first {
	int a = 7;
	double b = 8.9;
}

int a;

int main()
{
	using first::b;
	std::cout << a << '\n';
	std::cout << b << '\n';
	return 0;
}
*/

/*
//program which just illustrates many things i have learnt so far
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <class SomeType>
SomeType sum(SomeType a, SomeType b)
{
	SomeType z;
	z = a + b;
	return z;
}

namespace first
{
	double a = 2.5, b = 5.5;
}

namespace second
{
	int a = 5, b = 10;
}

int main()
{
	int myArray[5]{ 9,4,6,3,7 };

	for (int i = 0; i < 5; i += 1) {
		cout << "Element" << myArray[i] << '\n';
		std::cout << "we have finished\n";
	}
	{
		std::cout << "next part of program\n";
	}

	using namespace first;
	cout << "sum with double namespace: " << sum(a, b) << endl;

	using second::a;
	using second::b;
	cout << "sum with int namespace: " << sum<int>(a, b) << endl;

	string mystr;
	string name;
	cout << "what is your name? " << '\n';
	getline(cin, mystr);
	stringstream(mystr) << name;

	cout << "Thank you " << mystr << endl;
	return 0;
}
 */

/*  
#include <iostream>
using namespace std;

int main()
{
	int arr[3]{ 10,20,30 };

	for (int i = 0; i < 3; ++i) {
		arr[i] += i;
	}
	for (int elem : arr) {
		cout << elem << " " << '\n';
	}
}
*/

/* 
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int , 3> myArr {10, 20, 30};
	for (int n = 0; n < myArr.size(); n++) {
		//myArr[n]++;
		++myArr[n];
	}
	for (int elem : myArr) {
		std::cout << elem << " " << '\n';
	}
}
*/

/* 
#include <iostream>
using namespace std;

void printArray(int arr[], int length) {
	for (int n = 0; n < length; n++) {
		cout << arr[n] << " ";
	}
}

int main()
{
	int firstArr[]{ 10,20,30,40 };
	int secondArr[5]{ 7,4,5,2,0 };

	cout << "the first array is : " << endl; 
	printArray(firstArr, 4);
	cout << "the second array is: " << endl;
	printArray(secondArr, 5);
	return 0;
}
*/

/* 
#include <iostream>
#include <array>
#include <string>
#include <sstream>
using namespace std;
constexpr auto COUNT1 = 5;;
#define COUNT2 5


int main()
{
	double a = 2.5, b = 5.7;
	double* aptr = &a;
	double* bptr = &b;

	int myarr1[]{ 3,7,9,2,5 };
	array< int, 5> myarr2{1,2,3,4,5};

	string mystr;
	string name; 
	cout << "What is your name? :" << endl;
	getline(cin, mystr);
	stringstream(mystr) >> name ;
	cout << "welcome " << mystr << endl;

	cout << "the value of aptr is : " << aptr << endl;
	cout << "the value of bptr is : " << bptr << endl;

	cout << "the value of *aptr is " << *aptr << endl;
	cout << "the value of *bptr is " << *bptr << endl;

	cout << "the value of &a is " << &a << endl;
	cout << "the value of &b is " << &b << endl;

	cout << "the value of a is " << a << endl;
	cout << "the value of b is " << b << endl;

	for (int i = 0; i < COUNT1 ; i++)
	{
		cout << myarr1[i] << endl;

		if (i == 4)
		{
			cout << "we are finished" << endl;
			break;
		}
	}

	for (int j = 0; j < COUNT2 ; j++)
	{
		if (j == 3)
		{
			continue;
 		}
		cout << myarr2[j] << endl;
	}

	return 0;
}
*/

/* 
//testing structures data type
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies {
	string name;
	int year;
};

void printmovie(movies movie);

int main()
{
	string mystr;
	movies mine;
	movies yours;

	mine.name = "Star Wars Clone Wars";
	mine.year = 1997;

	cout << "what is your favrite movie? : " << endl;
	getline(cin, yours.name);

	cout << "what year was the movie produces? : " << endl;
	cin >> yours.year ;

	cout << "My favrite movie is " << mine.name << " from year " << mine.year << endl ;
	
	printmovie(yours);

	return 0;
}

void printmovie(movies movie) {
	cout << "your favrite mocie is " << movie.name << " from the year " << movie.year << endl;
}
*/


/* 
//using array and pointers in the mix
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies {
	string title;
	int year;
} list [3] ;

void printmovie(movies movie);


int main()
{
	string mystr;
	for (int i = 0; i < 3; i++) {
		cout << "Enter movie: " << '\n';
		getline(cin, list[i].title);
		cout << "Enter year: " << '\n';
		cin >> list[i].year;
	}

	cout << "You entred these movies: \n";

	for (int i = 0; i < 3; i++) {
		printmovie(list[i]);
	}

	return 0;
}

void printmovie(movies movie) {
	cout << movie.title << " " << movie.year << endl;
}

*/

/* 
// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
} films[3];

void printmovie(movies_t movie);

int main()
{
	string mystr;
	int n;

	for (n = 0; n < 3; n++)
	{
		cout << "Enter title: ";
		getline(cin, films[n].title);
		cout << "Enter year: ";
		getline(cin, mystr);
		stringstream(mystr) >> films[n].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (n = 0; n < 3; n++)
		printmovie(films[n]);
	return 0;
}

void printmovie(movies_t movie)
{
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}

*/

/* 
//useless
#include <iostream>
using namespace std;

namespace use {
	int a = 7;
	int b = 5;
}
int main()
{
	using namespace use;
	cout << a + b << endl;
	return 0;
}
*/


//C++/Classes and Inheritance

/* 
//using structs to represent dogs
#include <iostream>
#include <string>
using namespace std;

struct dog {
	std::string name;
	char gender;
	int age;
	std::string color;
	bool healthy;
} spike ;

dog maxi;

int main()
{
	dog scobby;
	dog taffy;
	scobby.name = "scobby"; scobby.gender = 'M'; scobby.age = 10;
	scobby.color = "white"; scobby.healthy = false;
	cout << scobby.name << " is a " << scobby.gender << " of age " << scobby.age << " and color " 
		<< scobby.color << " with health " << scobby.healthy << endl;

	taffy.name = "taffy"; taffy.gender = 'M'; taffy.age = 8;
	taffy.color = "black"; taffy.healthy = false;
	cout << taffy.name << " is a " << taffy.gender << " of age " << taffy.age << " and color "
		<< taffy.color << " with health " << taffy.healthy << endl;

	spike.name = "spike"; spike.gender = 'F'; spike.age = 5;
	spike.color = "black"; spike.healthy = true;
	cout << spike.name << " is a " << spike.gender << " of age " << spike.age << " and color "
		<< spike.color << " with health " << spike.healthy << endl;

	maxi.name = "max"; maxi.gender = 'M'; maxi.age = 1;
	maxi.color = "grey"; maxi.healthy = true;
	cout << maxi.name << " is a " << maxi.gender << " of age " << maxi.age << " and color "
		<< maxi.color << " with health " << maxi.healthy << endl;
}
*/

/* 
#include <iostream>
#include <string>
using namespace std;

class dog
{
private:
	string name;
	char gender;
	int age;
	bool healthy;

public:
	string getName() const { return name ;  }
	char getGender() const { return gender; }
	int getAge() const { return age; }
	bool getHealthy() const { return healthy; }
	void  setHealthy(bool dhealthy) { healthy = dhealthy; }
	void  setName(const std::string& dname) { name = dname; }

	dog() : //initializing class with defaults
		name("scobby"), gender('M'), age(10), healthy(false)
	{}

	//initializing with given values
	dog(const std::string& dname, int dgender, int dage, bool dhealthy) :
		name(dname), gender(dgender), age(dage), healthy(dhealthy)
	{}

} spike, max;


int main()
{
	dog scruffy("Scuffy", 'M', 10, false);
	//dog scruffy;
	std::cout << "scruffy's name   is " << scruffy.getName() << std::endl;
	std::cout << "scruffy's gender is " << scruffy.getGender() << std::endl;
	std::cout << "scruffy's age    is " << scruffy.getAge() << std::endl;
	if (scruffy.getHealthy())
		std::cout << "scruffy is healthy :)" << std::endl;
	else
		std::cout << "scruffy isn't healthy :(" << std::endl;

	return 0;
}
*/

/* 
//using structs and mixed types
#include <iostream>
#include <string>
using namespace std;

struct dog {
	string name;
	string color;
	int age;
}spike;

int main()
{
	dog scobby;
	scobby.name = "scobby"; scobby.color = "white"; scobby.age = 10;
	spike.name = "spike"; spike.color = "black"; spike.age = 5.3;

	cout << scobby.name << " has a color: " << scobby.color << " and age: " << scobby.age << endl;
	cout << spike.name << " has a color: " << spike.color << " and age: " << spike.age << endl;
	return 0;
}
*/


#include <iostream>
#include <string>
using namespace std;

namespace animalia {
	string defname = "unknown";
	int defage = 0;
}

class animal {
private:
	string name;
	int age;
public:
	virtual string speak() { return "cry baby"; }

	string getName() { return name; }
	int getAge() { return age; }

	void setName(string dname) { name = dname; }
	void setAge(int dage) { age = dage; }

	animal():
		name(animalia::defname), age(animalia::defage)
	{}

	animal(string dname, int dage) :
		name(dname), age(dage)
	{}
};

class cat : public animal {
private:
	int lives;
public:

	string speak() { return "meowwww"; }
	int getLives() { return lives; }
	void setLives(int dlives) { lives = dlives; }

	cat(string dname, int dage) : animal(dname, dage)
	{}
};

class dog : public animal {
private:
	bool tough;
public:
	string speak() { return "woff woff"; }

	bool getToughness() { return tough; }
	void setToughness(bool dtough) { tough = dtough; }
};

class people : public animal {
private:
	int id;
public:
	string speak() { return "I am a person and very intelligent!"; }

	int getId() { return id; }
	void setId(int dId) { id = dId; }
};

class student : public people {
private:
	string univeristy;
public:
	string speak() { return "I am very intelligent! i went to college"; } //do we need to use virtual in people speak>?

	string getUniversity() { return univeristy; }
	void setUniversity(string duniveristy) { univeristy = duniveristy; }
};


int main()
{
	animal alien("predator", 975);
	cout << alien.speak() << " with name " << alien.getName() << " and age " << alien.getAge() << endl;
	alien.setName("predatorXXX"); alien.setAge(1067);
	cout << alien.speak() << " with name " << alien.getName() << " and age " << alien.getAge() << endl;

	cout << '\n';

	animal mammal;
	cout << mammal.speak() << " with name " << mammal.getName() << " and age " << mammal.getAge() << endl;
	mammal.setName("whale"); mammal.setAge(15);
	cout << mammal.speak() << " with name " << mammal.getName() << " and age " << mammal.getAge() << endl;

	cout << '\n';

	cat pussy("pussy", 5);
	cout << pussy.speak() << " with name " << pussy.getName() << " and age " << pussy.getAge() << endl;

	cout << '\n';

	cat kitty("tabbycat", 5);
	cout << kitty.speak() << " with name " << kitty.getName() << " and age " << kitty.getAge() << endl;
	kitty.setName("kitty"); kitty.setAge(3); kitty.setLives(10);
	cout << kitty.speak() << " with name " << kitty.getName() << " and age " << kitty.getAge() << " unique lives: " << kitty.getLives() << endl;

	cout << '\n';

	dog scobby;
	cout << scobby.speak() << " with name " << scobby.getName() << " and age " << scobby.getAge() << endl;
	scobby.setName("scobby"); scobby.setAge(10); scobby.setToughness(true);
	cout << scobby.speak() << " with name " << scobby.getName() << " and age " << scobby.getAge() << " unique toughness " << scobby.getToughness() << endl;

	cout << '\n';

	people james;
	cout << james.speak() << " with name " << james.getName() << " and age " << james.getAge() << endl;
	james.setName("james"); james.setAge(26); james.setId(555);
	cout << james.speak() << " with name " << james.getName() << " and age " << james.getAge() << " unique id: " << james.getId() << endl;

	cout << '\n';

	student jerry;
	cout << jerry.speak() << " with name " << jerry.getName() << " and age " << jerry.getAge() << endl;
	jerry.setName("jerry"); jerry.setAge(23); jerry.setId(7567); jerry.setUniversity("MIT");
	cout << jerry.speak() << " with name " << jerry.getName() << " and age " << jerry.getAge() << " unique id: " << jerry.getId() << " unique univerity: " << jerry.getUniversity() << endl;
}























































































































































































































































































