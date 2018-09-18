/*
W15664768 CS110B Pyramid Palindrome:
input base length to calculate height
and numerical content of the triangle
*/
# include <iostream>
# include <cmath>
# include <iomanip>
# include <string>
using namespace std;

int main()
{
    int base;
    cout << "What base length(less than 5) would you like to use?: " ;
    cin >> base;
    int n = 0;
    for (int x = 0; x <= base - 1; x++)
    {
        n = n + pow(10,x);
        int y = n * n;
        cout << y << endl;
    }
     return 0;
}
/*
 Guadalupes-MacBook-Pro:CS110B Hubert$ g++ hw3PalindromePyramid.cc
Guadalupes-MacBook-Pro:CS110B Hubert$ ./a.out
What base length(less than 5) would you like to use?: 4
1
121
12321
1234321
Guadalupes-MacBook-Pro:CS110B Hubert$ 

*/
