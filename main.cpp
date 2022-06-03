#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> length;
    int n;
    cin >> n;
    length.push_back(1);
    length.push_back(1);
    length.push_back(1);
    length.push_back(2);
    length.push_back(2);
    if(n==0 || n==1 || n==2)
        cout << 1 << endl;
    else if(n==3 || n==4)
        cout << 2 <<endl;
    else{//剛好是前一個和前五個的和
        for(int i=5; i<=n; i++){
            length.push_back( length[i-5] + length[i-1] );
        }
        cout << length[n] << endl;
    }
    return 0;
}
