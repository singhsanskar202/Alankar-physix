#include<bits/stdc++.h>
#include <cmath>
using namespace std;
double calculation(double i,int n){

        if(i<0.0){
            return pow(i,n)-1+exp(i);
        }
        else
        return pow(i,n)-log(1+i);
}
int main()
{ ios_base::sync_with_stdio(0);
 cin.tie(NULL);
 //Gnuplot gp;
    int n;
    double x1, x2, y;
float dx=0.01;
    cout<<"enter x1"<<endl;
    cin>>x1;
    cout<<"enter x2"<<endl;
    cin>>x2;
    cout<<"N"<<endl;
    cin>>n;
    ofstream fout;
    fout.open("sample.txt");

       for (double i = x1; i<=x2 ;i+=dx)
    { a.push_back(i);
        double y;
        y= calculation(i,n);
        b.push_back(y);
        fout<<i;
        fout<<"                   ";
        fout<<y<<endl;
    }
    fout.close();
}
