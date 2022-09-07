#include <iostream>
using namespace std;

class CandD {
private:
    int objectID;
public:
    CandD (int objID)  {
        objectID = objID;
        cout<< objectID <<" created\n";
    }
    ~CandD () {
        cout<<objectID <<" destroyed\n";
    }
};

void myFun(int start){
    CandD a{ start };
    while ( true ) {
        CandD b{ start-3 };
        break;
    }
    CandD d{ start+6 };
    return;
}

CandD waffle{ 9 };

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    CandD x{1};
    {
        CandD y{2};
        myFun (3);
    }
    CandD z{7};
 
    return 0;
}
