//
//  masik_megoldas.cpp
//
//
//  Created by Győrvári Péter on 2019. 11. 25..
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"A\tB\tC\tD\t\tlight";
    for(a=0;a<=1;++a)
        for(b=0;b<=1;++b)
            for(c=0;c<=1;++c)
                for(d=0;d<=1;++d)
            {//érdemi logikai funkció------------------------------------------------
                if((a and b and c)or(b and c and d) or (a and c and d) or (a and b and d))
                    cout<<"\n\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t\t"<<"The light is shining"<<endl;
                else
                    cout<<"\n\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t\t"<<"darkness reigns"<<endl;
            }
    return 0;
}
