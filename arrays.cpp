#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int arr[5]={7,2,8,5,4} ;
    int mins;
    
    for (int i=0;i<5;i++){
        mins=i;
        for (int j=0;j<5;j++){
            if (arr[mins] > arr[j]){
                mins =j;
                }
            
        }
    int num= arr[i];
    arr[i]=arr[mins];
    arr[mins]=num;
    
    for (int a=0;a<5;a++){
        cout << arr[a] << endl ;
    }
    }
   
    cout << "thankyou" ;

    return 0;
}