#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<"The initial string is "<<str<<endl;

    str.push_back('s');
    cout<<"The string after pushing back s is "<<str<<endl;       

    str.pop_back();
    cout<<"The string after popping back s is "<<str<<endl; 

    string s="sanvi is a good girl. sanvi is a naughty girl";
    cout<<"The iniital string is: "<<endl<<s<<endl;

    s.resize(12);
    cout<<"String after resizing "<<s<<endl;

    cout<<"The capacity of the string is: "<<s.capacity()<<endl;

    cout<<"The length of string is "<<s.length()<<endl;

    s.shrink_to_fit();
    cout<<"New capacity after shrinking is: "<<s.capacity()<<endl;

    string::iterator it; string::reverse_iterator itr;
    for(it=str.begin();it!=str.end();it++) cout<<*it; cout<<endl;

    cout<<"REVERSE ITERATOR: "<<endl;
    for(itr=str.rbegin();itr!=str.rend();itr++) cout<<*itr; cout<<endl;

    string st1="geeks for geeks is for geeks";
    string st2="sanvi rocks sanvi.";
    
    cout<<st1<<endl<<st2<<endl;

    st1.swap(st2);

    cout<<st1<<" "<<st2<<endl;
    if(st1.compare(st2)==0) cout<<"Strings are equal"<<endl;
    else cout<<"Strings are unequal"<<endl;

    // find() returns position to first
    // occurrence of substring "Geeks"
    // Prints 4
    cout << "First occurrence of \"Sandadi\" starts from : ";
    cout << str.find("Sandadi") << endl;
  
    // Prints position of first occurrence of
    // any character of "reef" (Prints 2)
    cout << "First occurrence of character from \"ndad\" is at : ";
    cout << str.find_first_of("ndad") << endl;
  
    // Prints position of last occurrence of
    // any character of "reef" (Prints 16)
    cout << "Last occurrence of character from \"ndad\" is at : ";
    cout << str.find_last_of("ndad") << endl;
  
    // rfind() returns position to last
    // occurrence of substring "Geeks"
    // Prints 14
    cout << "Last occurrence of \"Sandadi\" starts from : ";
    cout << str.rfind("Sandadi") << endl;

    str.insert(18,"ShailajaKomatireddy ");
    cout<<str<<endl;

    str.clear();
    (str.empty()==1)?cout<<"String is empty"<<endl:cout<<"String is not empty"<<endl;

	// various constructor of string class

	// initialization by raw string
	string str1("first string");

	// initialization by another string
	string str2(str1);

	// initialization by character with number of occurrence
	string str3(5, '#');

	// initialization by part of another string
	string str4(str1, 6, 6); // from 6th index (second parameter)
							// 6 characters (third parameter)

	// initialization by part of another string : iterator version
	string str5(str2.begin(), str2.begin() + 5);

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;

	// assignment operator
	string str6 = str4;

	// clear function deletes all character from string
	str4.clear();

	// both size() and length() return length of string and
	// they work as synonyms
	int len = str6.length(); // Same as "len = str6.size();"

	cout << "Length of string is : " << len << endl;

	// a particular character can be accessed using at /
	// [] operator
	char ch = str6.at(2); // Same as "ch = str6[2];"


	cout << "third character of string is : " << ch << endl;

	// front return first character and back returns last character
	// of string

	char ch_f = str6.front(); // Same as "ch_f = str6[0];"
	char ch_b = str6.back(); // Same as below
							// "ch_b = str6[str6.length() - 1];"

	cout << "First char is : " << ch_f << ", Last char is : "
		<< ch_b << endl;

	// c_str returns null terminated char array version of string
	const char* charstr = str6.c_str();
	printf("%s\n", charstr);

	// append add the argument string at the end
	str6.append(" extension");
	// same as str6 += " extension"

	// another version of append, which appends part of other
	// string
	str4.append(str6, 0, 6); // at 0th position 6 character

	cout << str6 << endl;
	cout << str4 << endl;

	// find returns index where pattern is found.
	// If pattern is not there it returns predefined
	// constant npos whose value is -1

	if (str6.find(str4) != string::npos)
		cout << "str4 found in str6 at " << str6.find(str4)
			<< " pos" << endl;
	else
		cout << "str4 not found in str6" << endl;

	// substr(a, b) function returns a substring of b length
	// starting from index a
	cout << str6.substr(7, 3) << endl;

	// if second argument is not passed, string till end is
	// taken as substring
	cout << str6.substr(7) << endl;

	// erase(a, b) deletes b characters at index a
	str6.erase(7, 4);
	cout << str6 << endl;

	// iterator version of erase
	str6.erase(str6.begin() + 5, str6.end() - 3);
	cout << str6 << endl;

	str6 = "This is a examples";

	// replace(a, b, str) replaces b characters from a index by str
	str6.replace(2, 7, "ese are test");

	cout << str6 << endl;

    return 0;
}