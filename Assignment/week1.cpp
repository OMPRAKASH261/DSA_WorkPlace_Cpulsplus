// 1. How can you output "Physics" and "Wallah" in two different lines in C++?
// Solution=>

#include<iostream>
using namespace std;
int main(){
    cout<<"Physics"<<endl;
    cout<<"Wallah"<<endl;
    return 0;
}
    
   //op = Physics
       //  Wallah
 


// 2. Print 10 using 2 postive numbers less than 6 in C++ as Output.
// Solution=>

#include<iostream>
using namespace std;
int main(){
    cout<<5+5<<endl;
}
   //op = 10




// 3. What is the output of the program?
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 5;
    a++, b--;
    cout<<++a<<" "<<b--;
}
   //op = 6 4




// 4. WAP to find circumference of a circle with radius 10 in C++.
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int r = 10;
    float pi = 3.14;
    float circumference = 2*pi*r;
    cout<<circumference;
    return 0;
} 
  //op = 62.8




// 5. Find the output for this code. Let input:- 2 3 6
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;
    int y, m;
    cout<<"Enter second number and value for taking modulus\n";
    cin>>y>>m;
    int Z = (x*y)%m;
    cout<<"Output is : " <<Z;
}
   //op = 0





// 6. Find the output for this code. Let input:- 3 2
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;
    int y;
    cout<<"Enter second number\n";
    cin>>y;
    cout<<(x!=y)<<" "<<(x>=y);
}
   //op= 1 1 (i.e. true true)





// 7. Find the output for this code. Let input:- 2 3
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    x += y;
    x -= y;
    x %= y;
    cout<<x;
}
   //op= 2




// 8. WAP for finding the vloume of the cylinder by taking radius and height as input.
// Solution=>

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,h;
//     cout<<"Enter the radius and height of cylinder"<<endl;
//     cin>>r>>h;
//     int pi = 3.14;
//     int volume = pi*r*r*h;
//     cout<<volume;
//     return 0;
// }




// 9. WAP to find the difference between ASCII of two characters, take them as input.
// Solution=>

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char a,b;
//     cout<<"Enter two characters :"<<endl;
//     cin>>a>>b;
//     cout<<b-a<<endl;
//     return 0;
// }




// 10. Find the output of the below code.
// Solution=>

#include<iostream>
using namespace std;
int main(){
    int i = (4+7/5*6*6+9)%100;
    cout<<i;
}
  //op = 49