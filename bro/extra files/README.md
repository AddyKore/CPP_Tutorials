# CPP_Tutorials
This Repo consists of a cheat sheet with in the README and all hobby codes for C++ from the most basic to very advanced  algorithm and programs

Readme only has pointers that are not obvious( int , double cin, cout is obvious;;  but for syntax is not)

--------------------------------------------------
Printing:

std::cout << "Hello World" << std::endl ;

so where ever the < points thats where the object is going so "hello World" will be going to consold as the arrow is pointig to console thats c in cout here

endl is the end of line 

---------------------------------------------------

Comments

// single line comment

/* multi
line 
comment */

---------------------------------------------------

namespace

Namespaces are used to make different entities with same name like first::x and sexond::x are 2 different variables from two different namespaces

if you dont want to constantly write first::x second::x then you can just simply do "using namespace first" and this should automatically start using that namespace unless you hae a new local variable with same identifier. you can always do second::x to use second name space

using namespace std; is done to avoid usinnd std:: before string, cout, cin and many oother things
this is not a great idea to use coz it bring in may elements that are named with some common names like data and that might break the program


---------------------------------------------------

typedef

this is a tool used to make alias for exsting datatypes that you do not want to write over and over again; like std::string can become str

typedef std::string str_t;

_t is used to indicate its a datatype

you can also use "using"

using str = std::string;

using is helpfull when templates come into play( discussed later)
---------------------------------------------------