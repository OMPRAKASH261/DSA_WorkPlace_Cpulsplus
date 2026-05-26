//n => 1. Take 2 integers input and print the greatest of them.
// Input : a=2 b=7
// Solutio

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    if(a>b){
        cout<<"First number "<<a<<" is the largest";
    }
    else{
        cout<<"Second number "<<b<<" is the largest";
    }
    return 0;
} 
   //op = second number 7 is the largest


// 2. Given the radius of the circle, predict whether numerically the area of 
//   this circle is larger than the circumference or not.
// Input = 4
// Solution =>

#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius : ";
    cin>>radius;
    float area = 3.14*radius*radius;
    float circumference = 2*3.14*radius;
    if(area > circumference){
        cout<<"Area is greater than circumference."<<endl;
    }
    else{
        cout<<"Circumference is greater than area."<<endl;
    }
    return 0;
}
    // output = Area is greater than circumferece.


// 3. Any year is input through the keyword. write a program to determine wether the year
//    is a leap year or not. (considering leap year occurs after every 4 years)
//  input 1 : 1976 , input 2 : 2003
// Solution =>

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year : ";
    cin>>year;
    // leap year if perfectly divisible by 400
    if(year%400==0){
        cout<<year<<" is a leap year.";
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if(year%100==0){
        cout<<year<<" is not a laep year.";
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if(year%4==0){
        cout<<year<<" is a leap year.";
    }
    // all other year are not leap years
    else{
        cout<<year<<" is not a leap year.";
    }
    return 0;
}
  //op1 : 1976 is a leap year. , op2 : 2003 is not a leap year.


// 4. Given the length and breadth of a rectangle, write a program to find whether
//    numerically the area of the rectangle is greater than its perimeter.
//  Input : length = 5 , breadth =7
// Solution =>

#include<iostream>
using namespace std;
int main(){
    int length , breadth;
    cout<<"Enter the length and breadth of the rectangle respectively : ";
    cin>>length>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    if(area>perimeter){
        cout<<"Area is greater than perimeter.";
    }
    else{
        cout<<"Perimeter is greater than area.";
    }
    return 0;
}
 // op = Area is greater than perimeter.



// 5. Write a program to input sides of triangle and check whether a triangle
//    is equilateral, scalene or isosceles triangle.
//  Input : side1 = 5 , side2 = 4 , side3 = 4
// Solution =>

#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Please enter three sides of a triangle : ";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3){
        cout<<"This is an equilateral triangle";
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        cout<<"This is an Isosceles triangle";
    }
    else{
        cout<<"This is a Scalene triangle";
    }
    return 0;
}
   // op => This is an Isoceles triangle



// 6. If the marks of A,B and C are input through the keyboard, write a program to
//    determine the student scoring least marks.
//  Input : A = 23, B = 34, C = 71
// Solution =>

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter marks of students : ";
    cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout<<"A scores the least marks";
    }
    else if(b<=a && b<=c){
        cout<<"B scores the least marks";
    }
    else{
        cout<<"C scores the least marks";
    }
    return 0;
}
 // op => A scores the least marks



// 7. Given a point (x,y) , write a program to find out if it lies on the x-axis,
//    y-axis or at the origin , viz.(0,0).
//  Input : 2 0
// Solution =>

#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the x-y coordinates of the point : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point is on the origin.";
    }
    if(x==0 && y!=0){
        cout<<"The point lie on the y-axis.";
    }
    if(x!=0 && y==0){
        cout<<"The point lie on the x-axis.";
    }
    if(x!=0 && y!=0){
        cout<<"The points lie on the plane.";
    }
    return 0;
}
  // op => The point lies on the x-axis.


// 8. Given three point (x1,y1) , (x2,y2) and (x3,y3), write a program to check if all 
//    the three points fall on one straight line.
// Input : x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
// Solution =>

#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    cout<<"Enter points (x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"Enter points (x2,y2)"<<endl;
    cin>>x2>>y2;
    cout<<"Enter points (x3,y3)"<<endl;
    cin>>x3>>y3;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout<<"All 3 points lie on the same line";
    }
    else{
        cout<<"All 3 points do not lie on the same line";
    }
    return 0;
}
 // op => All 3 points lie on the same line.


// 9. Write a C++ program to input any character and check whether it is the aphabet,
//    digit or special character.
//  Input : ch = '9'
// Solution =>

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter ant character : ";
    cin>>ch;
    // Alphabet checking condition
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<ch<<" is an Alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<ch<<" is a Digit";
    }
    else{
        cout<<ch<<" is a Special Character";
    }
    return 0;
}
    // op => 9 is Digit


// 10. Predict the output:
// solution =>

#include<iostream>
using namespace std;
int main(){
    int a = 500,b,c;
    if(a>=400);
    b = 300;
    c = 200;
    cout<<"Value of b and c are respectively "<<b<<" and "<<c;
    return 0;
}
    // op => Value of b and c are respectively 300 and 200   


// 11. Write a program to count the minimum number of note in a given amout using
//     the switch statement.
// Input = 555
// solution =>

#include<iostream>
using namespace std;
int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = 0;
    cout<<"Enter the amount : "<<endl;
    cin>>amount;

    switch(amount>=500){
        case 1:
        n500 += amount/500;
        amount -= n500*500;
        break;
    }

    switch(amount>=200){
        case 1:
        n200 += amount/200;
        amount -= n200*200;
        break;
    }

    switch(amount>=100){
        case 1:
        n100 = amount/100;
        amount -= n100*100;
        break;
    }

    switch(amount>=50){
        case 1:
        n50 += amount/50;
        amount -= n50*50;
        break;
    }

    switch(amount>=20){
        case 1:
        n20 += amount/20;
        amount -= n20*20;
        break;
    }

    switch(amount>=10){
        case 1:
        n10 += amount/10;
        amount -= n10*10;
        break;
    }

    switch(amount>=5){
        case 1:
        n5 += amount/5;
        amount -= n5*5;
        break;
    }

    switch(amount>=2){
        case 1:
        n2 += amount/2;
        amount -= n2*2;
        break;
    }

    switch(amount>=1){
        case 1:
        n1 += amount/1;
        amount -= n1;
        break;
    }

    cout<<"Notes of 500 are "<<n500<<endl;
    cout<<"Notes of 200 are "<<n200<<endl;
    cout<<"Notes of 100 are "<<n100<<endl;
    cout<<"Notes of 50 are "<<n50<<endl;
    cout<<"Notes of 20 are "<<n20<<endl;
    cout<<"Notes of 10 are "<<n10<<endl;
    cout<<"Notes of 5 are "<<n5<<endl;
    cout<<"Notes of 2 are "<<n2<<endl;
    cout<<"Notes of 1 are "<<n1<<endl;

}

    // op => 
    // Notes of 500 are 1
    // Notes of 200 are 0
    // Notes of 100 are 0
    // Notes of 50 are 1
    // Notes of 20 are 0
    // Notes of 10 are 0
    // Notes of 5 are 1
    // Notes of 2 are 0
    // Notes of 1 are 0


// 12. Predict the output:
// solution =>

#include<iostream>
using namespace std;
int main(){
    int a = 5, b, c;
    b = a = 15;
    c = a < 15;
    cout<<" a = "<<a<<", b = "<<b<<", c = "<<c;
    return 0;
}
    // op => a = 15, b = 15, c = 0


// 13. Predict the output:
// solution =>

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    float y = 3.0;
    if(x == y){
        cout<<"x and y are equal ";
    }
    else cout<<"x and y anre not equal ";
    return 0;
}
    // op=> x and y are equal 


// 14. Predict the output:
// solution =>

#include<iostream>
using namespace std;
int main(){
    int test = 0;
    cout<<"First character "<<'1'<<endl;
    cout<<"Second character "<<(test ? 3 : '1')<<endl;
}