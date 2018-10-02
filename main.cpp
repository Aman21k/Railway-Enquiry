#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<string>
using namespace std;
class rail
{
    int k,v;
    static int seats;
    string s,d;
public:
    void fare()
    {
        cout<<"enter the source station(w/o using space) \n";
        cin>>s;
        cout<<"enter the destination station(w/o using space) \n";
        cin>>d;
        if(d==s)
            cout<<"invalid entry "<<endl;
        else
        {
            cout<<"enter the distance of your journey in KMs\n";
            cin>>k;
            cout<<"select the type of train \n 1.AC  2.Non AC\n";
           cin>>v;

        if(v==1)
 {     if(k<=50)
            cout<<"fare is 50 Rs\n";
        else if(k>50&&k<100)
            cout<<"fare is 100 Rs\n";
        else if(k>=100&&k<150)
            cout<<"fare is 200 Rs\n";
        else if(k>=150&&k<200)
            cout<<"fare is 300 Rs\n";
        else if(k>=200&&k<300)
            cout<<"fare is 500 Rs\n";
        else if(k>=300&&k<500)
            cout<<"fare is 1000 Rs\n";
        else if(k>=500&&k<1000)
            cout<<"fare is 5000 Rs\n";
        else if(k>=1000&&k<3000)
            cout<<"fare is 10000 Rs\n";
        else
            cout<<"INVALID ENTRY\n";
    }
    else if(v==2)
    {
        if(k<=50)
            cout<<"fare is 20 Rs\n";
        else if(k>50&&k<100)
            cout<<"fare is 50 Rs\n";
        else if(k>=100&&k<150)
            cout<<"fare is 70 Rs\n";
        else if(k>=150&&k<200)
            cout<<"fare is 90 Rs\n";
        else if(k>=200&&k<300)
            cout<<"fare is 100 Rs\n";
        else if(k>=300&&k<500)
            cout<<"fare is 250 Rs\n";
        else if(k>=500&&k<1000)
            cout<<"fare is 500 Rs\n";
            else if(k>=1000&&k<2000)
            cout<<"fare is 750 Rs\n";
        else if(k>=2000&&k<3000)
            cout<<"fare is 1000 Rs\n";
        else
            cout<<"INVALID ENTRY \n";
    }
    else
        cout<<"wrong choice"<<endl;
}
}
void tbs()
{       int a[4]={64453,64532,64513,64510};
        int b[5]={12058,12057,14552,13098,11099};
        int ar[3]={11023,11000,40553},arr[5]={13243,14553,12434,43213,54332},br[4]={17654,43213,33322,12354};
        int brr[7]={11223,22113,43213,98654,76546,76555,98098},cr[8]={76565,65434,54323,87654,65435,90876,16432,66666};
        cout<<"enter the source station(w/o using space) \n";
        cin>>s;
        cout<<"enter the destination station(w/o using space) \n";
         cin>>d;
         if(d==s)
            cout<<"invalid entry "<<endl;
        else
        {cout<<"enter the distance of your journey in KMs\n";
        cin>>k;
        if(k<100)
     {
        cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<ar[i]<<endl;
        cout<<"NON AC Trains are -\n";
        for(int i=0;i<5;i++)
            cout<<a[i]<<endl;
     }
     else if(k>=100&&k<300)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<3;i++)
            cout<<b[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<4;i++)
            cout<<a[i]<<endl;
     }
     else if(k>=300&&k<700)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<arr[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<br[i]<<endl;
     }
     else if(k>=700&&k<=3000)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<7;i++)
            cout<<brr[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<8;i++)
            cout<<cr[i]<<endl;
     }
     else
        cout<<"invalid entry "<<endl;

}
}
void tb()
{
    char g;
    int t,q,ho,cc,ac;
    int a[4]={64453,64532,64513,64510};
        int b[5]={12058,12057,14552,13098,11099};
        int ar[3]={11023,11000,40553},arr[5]={13243,14553,12434,43213,54332},br[4]={17654,43213,33322,12354};
        int brr[7]={11223,22113,43213,98654,76546,76555,98098},cr[8]={76565,65434,54323,87654,65435,90876,16432,66666};
        cout<<"enter the source station(w/o using space) \n";
        cin>>s;
        cout<<"enter the destination station(w/o using space) \n";
         cin>>d;
         if(d==s)
            cout<<"invalid entry "<<endl;
        else
        {cout<<"enter the distance of your journey in KMs\n";
        cin>>k;
        if(k<100)
     {
        cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<ar[i]<<endl;
        cout<<"NON AC Trains are -\n";
        for(int i=0;i<4;i++)
            cout<<a[i]<<endl;
     }
     else if(k>=100&&k<300)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<3;i++)
            cout<<b[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<4;i++)
            cout<<a[i]<<endl;
     }
     else if(k>=300&&k<700)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<arr[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<5;i++)
            cout<<br[i]<<endl;
     }
     else if(k>=700&&k<=3000)
     {
         cout<<"Trains with their respective numbers are available\n";
        cout<<"AC Trains are -"<<endl;
        for(int i=0;i<7;i++)
            cout<<brr[i]<<endl;
        cout<<"NON AC Trains are -"<<endl;
        for(int i=0;i<8;i++)
            cout<<cr[i]<<endl;
     }
     else
        cout<<"invalid entry "<<endl;

    cout<<"enter the train number for booking seats\n";
    cin>>t;
    cout<<"available seats in the given train \n";
    if(seats>0)
    {cout<<seats<<endl;
    cout<<"how many seats you want to book\n";
    cin>>q;
    cout<<"To book your seat/seats press y\n";
    cin>>g;
    if(g=='y')
    {
        seats=seats-q;
        cout<<"What would be your payment method \n 1.Debit Card  2.Net Banking \n";
        cin>>ho;
        if(ho==1)
        {cout<<"Enter your Debit card number\n";
         cin>>cc;
          cout<<"Your seat has been booked....Do carry a valid ID with this ticket\n";
        }
        else if(ho==2)
        {
            cout<<"Enter your account number\n";
            cin>>ac;
            cout<<"Your seat has been booked....Do carry a valid ID with this ticket\n";
        }
        else cout<<"INVALID ENTRY\n";
    }
    else
        cout<<"INVALID ENTRY\n";
    }
    else
        cout<<"SORRY...seats are not available\n";
}
}
};
int rail::seats=90;
int main()
{   int c;
    rail r;
    cout<<"WELCOME ";
    Sleep(1000);
    cout<<" TO ";
    Sleep(1000);
    cout<<" INDIAN RAILWAYS \n";
    Sleep(1000);
    cout<<" We are here for your service \n";
    Sleep(1000);
    cout<<"1.Ticket Booking   2.Find Trains b/w Stations  3.Fare  4.exit\n";
    Sleep(1000);
    while(1)
    {
      cout<<"Enter your choice \n";
      cin>>c;
        switch (c)
    {
    case 1:
       r.tb();
       break;
    case 2:
        r.tbs();
        break;
    case 3:
        r.fare();
        break;
    case 4:
        exit(0);
    }
    }
   return 0;
 }
