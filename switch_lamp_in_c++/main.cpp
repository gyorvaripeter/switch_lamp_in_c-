#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int l [4], i=00;
    cout << "write 4  switch position, off=0 on=1\n" << endl;
    while(i<4){
        cin>>l[i];
        i++;
    }
    sort(l,l+4);
    switch(l[0]+l[1]){
        case 0: cout << "darkness reigns" << endl;break;
        default: cout << "The light is shining" << endl;break;
    }
        
        
    
    return 0;
}
