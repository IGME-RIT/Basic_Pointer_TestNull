/*
TestNull
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*	This tutorial covers concepts of nullpointer(C++11) and NULL.
*/

#include <iostream>
using namespace std;

int main() {
    int* p;
    int* q;
    int i = 10;
    p = &i;
    q = p;	// refer to aliases

    cout << "Before setting p to null: " << endl;

    printf("%s%i\n","*p: ",*p);
    printf("%s%i\n","p:  ",p);

    p = NULL; // 0



	cout << "p is now null: " << endl;

    // printf("%s%i\n","*p: ",*p); // no deref of NULL
    printf("%s%i\n","p:  ",p);
    printf("%s%i\n","q:  ",q);     // q change?

    cout << "set q via nullptr: " << endl;
	
	// C++11
    q = nullptr; // see http://thenewcpp.wordpress.com/2011/11/03/nullptr/
    // printf("%s%i\n","*q: ",*q);
    printf("%s%i\n","q:  ",q);


    // actually, if you might use managed C++, it's safer to use __nullptr when using VS:
    // http://msdn.microsoft.com/en-us/library/jj651642.aspx
    q = __nullptr;
    printf("%s%i\n","q:  ",q);

}
