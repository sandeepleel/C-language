//#include <iostream>
//using namespace std;
//
//int main() {
//	cout<<"Welcome to Talent Battle";
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	char c;
//	cout<<"Enter a character:"<<endl;
//	cin>>c;
//	if(c=='a' || c=='i' || c=='o' || c=='e' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'
//	)
//	cout<<"vowel";
//	else if(!((c>='a' && c<='z') || (c>='A' && c<='Z')))
//	{
//		cout<<"invalid input";
//	}
//	else
//	cout<<"consonent";
//}

#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	if((ch>='a' && ch<='z' ) || (ch >='A' && ch<='Z'))
	{
		cout<<ch<<" "<<"is an alphabet"<<endl;
	}
	else {
		cout<<ch<<" is not an alphabet"<<endl;
	}
	return 0;
}
