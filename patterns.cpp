//Square pattern
#include <iostream>
using namespace std;

// int main() {
//     int n = 4;
//     for (int i=0; i<n; i++)
//     {
//         for (int j=0; j<n; j++)
//         {
//         cout<<"* ";
//         }
//     cout<<endl;
//     }
    
// }

// int main() {
//     int n = 4;
//     for (int i=0; i<n; i++)
//     {
//         char ch = 'A';
//         for (int j=0; j<n; j++)
//         {
//         cout<<ch;
//         ch++;
//         }
//     cout<<endl;
//     }
    
// }


// int main(){
//     int n = 3;
//     int num = 1;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=n; j++)
//         {
//             cout<<num;
//             num++;
//         }
//     cout<<endl;
//     }
// }


//Triangle Pattern
// int n = 4;
// int main(){
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int n = 4;
// int main(){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// int n = 4;
// int main(){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int n = 4;
// int main(){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// int n = 4;
// int temp = 1;
// int main(){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<temp;
//             temp++;
//         }
//         cout<<endl;
//     }
// }


int n = 4;
int main(){
    
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=i+1; j>0; j--)
        {
            ch+j;
            cout<<ch;
      
        }
        cout<<endl;
    }
}