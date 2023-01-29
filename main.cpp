/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -
using namespace std;

void nhap(int& n, int a[], int b[]){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++)
        cin >> b[i];
}

bool check(int n, int a[], int b[], int i, int j){
    int pos1, pos2;
    for(int x = 0; x < n; x++)
        if(b[x] == a[i])
            pos1 = x;
    
    for(int x = 0; x < n; x++)
        if(b[x] == a[j])
            pos2 = x;
    
    if(pos1 > pos2)
        return false;
    
    return true;
}

int kendall(int n, int a[], int b[]){
    int count = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(check(n, a, b, i, j) == false)
                count++;
        }
    }
    return count;
}

int main(){
    int n, a[2000], b[2000];
    nhap(n, a, b);
    
    cout << kendall(n, a, b) << endl;
    
}

