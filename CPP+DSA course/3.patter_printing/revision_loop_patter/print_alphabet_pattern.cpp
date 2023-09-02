// print the pattern like para given below
//         A
//        ABC
//       ABCDE
//      ABCDEFG
//     ABCDEFGHI
//      ABCDEFG
//       ABCDE
//        ABC
//         A
                // By myself
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 65;
//     for (int i = 1; i <= 9; i++)
//     {
//         if (ch < 70)
//         {
//             for (int j = 1; j <= (69 - ch); j++)
//             {
//                 cout << " ";
//             }
//             for (char j = 65; j < ch + i; j++)
//             {
//                 cout << j;
//             }
//             cout << endl;
//             ch++;
//         }
//     }
//     for (int i = 1; i <= 4; i++)
//     {
//         char k = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " ";
//             k++;
//         }
//         for (char j = 65; j <= 73 - i - k; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }
                        // for general
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no_of_characters ";
    cin >> n;
    for (int line = 1; line <= n; line++)
    {
        for (int i = 1; i <= n - line; i++)
        {
            cout << " ";
        }
        int chrs = 2 * line - 1;
        for (int j = 0; j < chrs; j++)
        {

            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << endl;
    }
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int spaces = line - n;
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }
        int chrs = 2 * (2 * n - line) - 1;
        for (int j = 0; j < chrs; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}