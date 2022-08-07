#include <iostream>
using namespace std;
/*Code created by Adenutsi Andy Eleos 10974829*/
bool isPrime(int e)
{
    if (e <= 1)
    {
        return false;
    }

    for (int i =2; i<e; i++)
    {
        if(e%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    float sum=0.0;
    int c=0;
    int e;
    cout<<"Type a number"<<endl;
    cin>>e;

    for (int i=1; i<e; i++)
    {
        if (isPrime(i))
        {
            sum+=i;
            c+=1;
        }
    }

    cout << "The sum of Prime numbers below " << e << " is " << sum <<endl;
    float avg=sum/c;
}
