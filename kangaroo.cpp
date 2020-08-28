#include <iostream>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    /*
    *V1 siempre debe ser mayor a V2
    *Ya que de lo contrario el canguro 1
    *No será capaz de alcanzar nunca a canguro 2
    */
    if(v1>v2){
        /*
        *El número de saltos debe de ser
        *un numero entero.
        *Por lo que comprobamos que 
        *el residuo sea igual a 0
        */
        if( (x2-x1)%(v1-v2) == 0 )
            return "YES";
        else
        {
            return "NO";
        }
        
    } else
    {
        return "NO";
    }
}


int main(){
    int x1, v1, x2, v2;
    string result;
    
    cin >> x1 >> v1 >> x2 >> v2;
    result = kangaroo(x1,v1,x2,v2);
    cout << result;
    return 0;
}