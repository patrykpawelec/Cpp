#include <iostream>

using namespace std;
void liczydlo(int a, int b, int c, int d, int &x);
int main()
{
    int a,b,c,d,x;
    cout << "Hello world!" << endl;
    do
    {
        cout<<"Ile symboli nauki?\nSymbol 1: ";
        cin>>a;
        cout<<"Symbol 2: ";
        cin>>b;
        cout<<"Symbol 3: ";
        cin>>c;
        cout<<"Dowolny symbol: ";
        cin>>d;
        x=0;
        liczydlo(a,b,c,d,x);
        cout<<"Zdobyles "<<x<<" punktow.";
    }
    while(a<0 || b<0 || c<0 || d<0);
    return 0;
}
void liczydlo(int a, int b, int c, int d, int &x)
{
    int wa=a;
    int wb=b;
    int wc=c;
    int wynik=wa*wa+wb*wb+wc*wc;
    /*cout<<"\twynik: "<<wa*wa<<"+"<<wb*wb<<"+"<<wc*wc;*/
    while(wa>0 && wb>0 && wc>0)
    {
        wynik+=7;
        wa-=1;
        wb-=1;
        wc-=1;
        /*cout<<"+7";*/
    }
    if(wynik>x) x=wynik;
    /*cout<<" = "<<wynik<<endl;*/
    if(d>0)
    {
        liczydlo(a+1,b,c,d-1,x);
        liczydlo(a,b+1,c,d-1,x);
        liczydlo(a,b,c+1,d-1,x);
        if(a<=b && a<=c) liczydlo(a+1,b,c,d-1,x);
        else if(b<=a && b<=c) liczydlo(a,b+1,c,d-1,x);
        else if(c<=a && c<=b) liczydlo(a,b,c+1,d-1,x);

    }
}
