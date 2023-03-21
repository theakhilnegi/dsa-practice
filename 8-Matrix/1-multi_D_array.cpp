#include <iostream>
using namespace std;

// int main(){
//     int m=3,n=2;
//     int a[m][n]={{1,2},
//                 {3,4},
//                 {5,6}};
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
//     return 0;
// }

//double poiter MDarrry
//its not cashe friendly 
int main(){

int m=3,n=2;
int **a;
a= new int*[m];
for (int i = 0; i < m; i++)
{
    a[i]=new int[n];
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        a[i][j]=i+j;
    }
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<a[i][j]<<" ";
    }
}

return 0;
}
