/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row)
        {
            cout<<value;
            value = value + 1;
            col = col + 1;


        }
        cout<<endl;
        row = row +1;
    }
}

*/

/*

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
       int j = 1;
       while(j<=i)
       {
        cout<<"*";
        j = j + 1;

       }
       cout<<endl;
       i = i +1;

    }
}

*/

/*
 #include<iostream>
 using namespace std;
 int main(){
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;
int row = 1;
while(row <= n){
    int col = 1;
    while(col<=n){
        char output ;
        output = 64 + row;
        cout<<output<<" ";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}

 }
 */

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    char output = 'A';
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<output;
            output = output + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }


}

*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value on n"<<endl;
    cin>>n;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            char output = 'A' + i - 1 + j - 1;
            cout<<output;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            char output = 'A' + i - 1;
            cout<<output;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
*/

/*
#include<iostream>
using namespace  std;
int main()
{
    int n;
    char output = 'A';
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<output<<" ";
            output = output + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }

}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            char output = 'A' + i - 1 + j - 1;
            cout<<output<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            char output = 'A' +n -i +j -1;
            cout<<output<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;

    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int star = (n - row + 1);
        while (star > 0)
        {
            cout << "*";
             star = star - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        row = row + 1;
        cout << endl;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int star = n - row + 1;
        while(star)
        {
            cout<<"*";
            star = star - 1;
        }


    row = row + 1;
    cout<<endl;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int pattern = n - row + 1;
        while(pattern)
        {
            cout<<row;
            pattern = pattern - 1;
        }
    cout<<endl;
    row = row + 1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int num_pattern = row;
        while(num_pattern)
        {
           cout<<row;
           num_pattern = num_pattern - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int num_pattern = n - row + 1;
        while(num_pattern)
        {
            int value = row;
            cout<<value;
            value = value + 1;
        }
    cout<<endl;
    row = row + 1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value  of n"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int num_pattern = n - row + 1;
        int value = row;
        while(num_pattern)
        {

            cout<<value;
            value = value + 1;
            num_pattern = num_pattern - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/



/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        // For printing first space pattern
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // for printing first number pattern
        int num_pattern_1 = 1;

        while (num_pattern_1 <= row)
        {
            cout << num_pattern_1;

            num_pattern_1 = num_pattern_1 + 1;
        }

        // For printing second number pattern
        int num_pattern_2 = row - 1;
        while (num_pattern_2)
        {
            cout << num_pattern_2;
            num_pattern_2 = num_pattern_2 - 1;
        }

        cout << endl;
        row = row + 1;
    }
}
*/



/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int num_pattern_1 = n - row + 1;
        int output = 1;
        while (num_pattern_1)
        {
            cout << output;
            output = output + 1;
            num_pattern_1 = num_pattern_1 - 1;
        }
        int star_pattern_1 = row - 1;
        while (star_pattern_1)
        {
            cout << "*";
            star_pattern_1 = star_pattern_1 - 1;
        }
        int star_pattern_2 = row - 1;
        while (star_pattern_2)
        {
            cout << "*";
            star_pattern_2 = star_pattern_2 - 1;
        }
        int num_pattern_2 = n - row + 1;
        int output_2 = n - row + 1;
        while (num_pattern_2)
        {
            cout << output_2;
            output_2 = output_2 - 1;
            num_pattern_2 = num_pattern_2 - 1;
        }

        cout << endl;
        row = row + 1;
    }
}
*/