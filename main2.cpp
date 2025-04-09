#include<iostream>
using namespace std;

//int main()
//{
//	cout<<"Hello world!";
//	return 0;
//}


//int main() {
//
//int a;
//cout<<"enter a="<<endl;
//cin>>a;
//cout<<"value of a ="<<a;
//return 0;
//}

//int main()
//{
//	int a,b,c;
//	cout<<"value of a and b enter please =";
//	cin>>a;
//	cin>>b;
//	c=a+b;
//	cout<<"so sum is "<<c;
//	return 0;
//}

//int main()
//
//{
//	int a,b;
//	cout<<"a and b=";
//	cin>>a>>b;
//	cout<<"quotient is "<<a/b<<endl;
//	cout<<"remainder is "<<a%b<<endl;
//	return 0;
//}

//int main(){
//	int a;
//	float b;
//	double c;
//	char d;
//	cout<<sizeof(a)<<endl;
//	cout<<sizeof(b)<<endl;
//	cout<<sizeof(c)<<endl;
//	cout<<sizeof(d)<<endl;
//	return 0;
//	
//}
//
//int main(){
//
//int a,b,khali;
//cout<<"enter a and b =";
//cin>>a>>b;
//khali=a;
//a=b;
//b=khali;
//
//cout<<"value of a="<<a<<endl;
//cout<<"value of b="<<b<<endl;
//return 0;
//}

//#include<iostream>
//using namespace std;

//int main() {
//    char ch;
//    
//    // Input character from the user
//    cout << "Enter a character: ";
//    cin >> ch;
//    
//    // Output the ASCII value of the character
//    cout << "The ASCII value of '" << ch << "' is: " << int(ch) << endl;
//
//    return 0;
//}

//int main()
//{
//	int a,b,c;
//	cout<<"enter a and b="<<endl;
//	cin>>a>>b;
//	cout<<a*b;
//	return 0;
//}
//
//int main()
//{
//	int a;
//	cout<<"enter a=";
//	cin>>a;
//	if(a>0)
//
//{
//	cout<<"positive number"<<endl;	
//}
//else if(a<0){
//	cout<<"negative number"<<endl;
//}
//else 
//cout<<"neither positive nor negative number"<<endl;
//}
//
//
//int main()
//{
//	int a;
//	cin>>a;
//	if(a%2==0)
//	{
//		cout<<"Even Number"<<endl;
//	}
//	else 
//	cout<<"Odd Number"<<endl;
//	return 0;
//}

//int main()
//{
//	int n;
//	cout<<"enter any integer:";
//	cin>>n;
//	if(n!=0){
//		if((n%2)==0){
//			cout<<"number is even"<<endl;
//		}
//		else 
//		cout<<"number is odd"<<endl;
//	}
//	else {
//		cout<<"number is 0 neither even nor odd"<<endl;
//	}
//	cout<<"every time prints"<<endl;
//}
//
//int main()
//{
//	int a,b,c;
//	cout<<"enter a="<<endl;
//	cin>>a;
//	cout<<"enter b="<<endl;
//	cin>>b;
//	cout<<"enter c="<<endl;
//	cin>>c;
//	if(a>b){
//		if(a>c){
//			cout<<"a is greater"<<endl;
//		}
//		else 
//		{
//			cout<<"c is greater"<<endl;
//		}
//		
//	}
//	if(b>a){
//		if(b>c){
//			cout<<"b is greater"<<endl;
//		}
//		else {
//			cout<<"c is greater"<<endl;
//		}
//		
//	}
////	else {
////		cout<<"three are same"<<endl;
////	}
//return 0;
//	
////}


//int main()
//{
//	int array[]={1,2,3,4,5,6,7,8,9,10};
//	for(int n:array)
//	{ 
//	cout<<"n"<<endl;
//	}
//	return 0;
//}

//
//int main()
//{
//	 int n,sum=0;
//	 cout<<"enter n="<<endl;
//	 cin>>n;
//	 for(int i=1;i<=n;i++){
//	 	sum+=i;
//	 	
//	 }
//	 cout<<"sum is="<<sum<<endl;
//	 return 0;
//}

//int main()
//{
//	int n,table=1;
//	cout<<"enter n=";
//	cin>>n;
//	for(int i=1;i<=10;i++){
//		table=n*i;
//		cout<<n<<i<<table<<endl;
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int n,fact=1;
//	cout<<"enter n="<<endl;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		fact =fact*i;
//		
//	}
//	cout<<"fact is "<<fact;
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//    float x, y;
//
//    cout << "Enter the x coordinate: ";
//    cin >> x;
//    cout << "Enter the y coordinate: ";
//    cin >> y;
//
//    if (x > 0 && y > 0) {
//        cout << "The point (" << x << ", " << y << ") lies in Quadrant I." << endl;
//    } else if (x < 0 && y > 0) {
//        cout << "The point (" << x << ", " << y << ") lies in Quadrant II." << endl;
//    } else if (x < 0 && y < 0) {
//        cout << "The point (" << x << ", " << y << ") lies in Quadrant III." << endl;
//    } else if (x > 0 && y < 0) {
//        cout << "The point (" << x << ", " << y << ") lies in Quadrant IV." << endl;
//    } else if (x == 0 && y == 0) {
//        cout << "The point (" << x << ", " << y << ") is at the origin." << endl;
//    } else if (x == 0) {
//        cout << "The point (" << x << ", " << y << ") lies on the Y-axis." << endl;
//    } else {
//        cout << "The point (" << x << ", " << y << ") lies on the X-axis." << endl;
//    }
//
//    return 0;
//}
//for print fibonacci series 
int main(){
	int n,t1=0,t2=1,nextTerm=0;
	cout<<"Enter N=";
	cin>>n;
	if(n==1){
		cout<<t1<<endl;
	}
	cout<<t1<<","<<t2;
	for(int i=3;i<=n;++i){
		nextTerm=t1+t2;
		cout<<","<<nextTerm;
		t1=t2;
		t2=nextTerm;
	}
	cout<<endl;
	return 0;
}

