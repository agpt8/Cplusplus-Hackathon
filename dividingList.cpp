/**
 * @brief Given a buffer of N elements,divide it into two parts such that the first one contains all the prime numbers and the second one contains all the non-prime numbers. There is a marker between the first half and the second half of the buffer. Make sure that the elements of both the buffer halves are sorted.
 */

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v1(10);
    vector<int> v2(10);
    vector<int> v3(10);
    vector<int>::iterator p;
    p = v1.begin();
    int x, i;
    cout << "Enter the numbers " << endl;
    for (i = 0; i < 5; i++) {
        cin >> x;
        v1.push_back(x);
    }

    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << ' ';

    while (p != v1.end()) {
        cout << v1[i];
        p++;
    }
    while (p != v1.end()) {
        if (v1[i] % 2 == 0) {
            //cout<<"It is not a prime no ";
            v2.push_back(x);

        } else {
            // cout<<" It is a prime no ";
            v3.push_back(x);
        }
        p++;
    }

    cout << "Contents of non prime are :" << endl;
    for (i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    cout << "Contents of prime are : " << endl;
    for (i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    return 0;
}
