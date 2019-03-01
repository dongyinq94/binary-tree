# include <iostream>
using namespace std;
struct student
{
    long num;
    float score;
    struct student *next;
};


int main(int argc, char const *argv[])
{
    student a,b;
    a.num=1;
    a.score=1;
    b.num=2;
    b.score=1;
    a.next=&b;
    b.next= NULL;
    cout<<a.next->num<<endl;
    return 0;
}
