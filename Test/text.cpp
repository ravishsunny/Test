using namespace std;
# include <iostream>

class Test
{
    public:
        void print()
        {
            cout << "Hello World!";
        }
};

int main(){
    Test* test = new Test();
    test->print();
    return 0;
}