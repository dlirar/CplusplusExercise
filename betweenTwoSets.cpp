#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    // Función recursiva para retornar
    // MCD de a y b 
    int gcd(int a, int b){ 
        if (a == 0) 
            return b;  
        return gcd(b % a, a);  
    }  

    //Función para returnar 
    //mcm de a y b
    int lcm(int a, int b){ 
        return (a * b) / gcd(a, b); 
    } 

int getTotalX(vector<int> a, vector<int> b) {
    int total = 0;
    int n = 0;
    int i = 1;
    int mcm = a[0], mcd = b[0];
    
    /*Obtenemos el mínimo común multiplo de a*/
    for(int i = 0; i < a.size()-1; i++){
        mcm = lcm( mcm, a[i+1]);
    }

    /*Obtenemos el máximo común divisor de b*/
    for(int i = 0; i < b.size()-1; i++)
        mcd = gcd( mcd, b[i+1]);

    /*
    *Comprobamos si el mcd también es divisible
    *entre mcm
    */
    while(n < mcd){
        n = mcm*i;
        if(mcd % n == 0)
            total++;
        i++;
    }

    return total;
}

int main(){

    int n, m, data, total;
    vector<int> a;
    vector<int> b;
    vector<int>::iterator it;
    cin >> n >> m;

    for(int i = 0; i<n; i++){
        cin>>data;
        a.push_back(data);
    }

    for(int i = 0; i<m; i++){
        cin>>data;
        b.push_back(data);
    }

    total = getTotalX(a, b);
    cout << endl;
    cout << total <<endl;
    return 0;
}